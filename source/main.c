#include "config.h"
#include "innerE2PROM.h"
#include "lcd12864.h"

void main()     
{   
	uint8 str[4];
	uint8 temp;

	InitLCD12864();
	temp = E2ByteRead(0x2000);
	str[0] = (temp >> 4) + '0';
	str[1] = (temp & 0x0F) + '0';    
    E2SectorErase(0x2000);                       //ÉÈÇø²Á³ý      
    E2ByteProgram(0x2000,0x99);                  //Ð´EEPROM      
    _nop_();     
    _nop_();     
    _nop_();   
    _nop_();     
    _nop_();     
    _nop_();     
    temp = E2ByteRead(0x2000);                       //¶ÁEEPROM 
	str[2] = (temp >> 4) + '0';
	str[3] = (temp & 0x0F) + '0';
	
	LCDShowStr(0,0,str,4);  
    while(1);      
}