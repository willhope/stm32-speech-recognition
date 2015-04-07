#ifndef _ADC_H
#define _ADC_H

#include "stm32f10x_conf.h"
#include "stm32f10x.h"
 
#define fs			8000					//ADC������ Hz
#define	voice_len	2000					//¼��ʱ�䳤�� ��λms
#define	VcBuf_Len	((fs/1000)*voice_len)	//�������������� ��λ���� ÿ��������16λ
#define atap_len_t	300						//������������Ӧʱ�䳤�� ms
#define atap_len	((fs/1000)*atap_len_t)	//������������Ӧ����


void ADC_DMA_Init(void);

#endif
