/*
 * innerE2PROM.h
 * -------------
 * ˵������ͷ�ļ��ṩ����STC89C52RCϵ�е�Ƭ����д
 * 	     �ڲ�E2PROM�Ľӿں���
 */

 #ifndef _INNERE2PROM_H
 #define _INNERE2PROM_H  

 void Sector_erase(uint16 sector_addr);     		
 void Byte_program(uint16 byte_addr,uint8 isp_iap_data);
 uint8 Byte_read(uint16 byte_addr);

 #endif