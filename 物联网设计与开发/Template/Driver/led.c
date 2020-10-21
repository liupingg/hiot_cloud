/*>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
* �ļ���  �� led
* ����    �� liuping
* �汾    �� V1.0.0
* ʱ��    �� 2020/10/20
* ��Ҫ    �� led����ͷ�ļ�  
********************************************************************
* ����
*
*>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>*/
/* ͷ�ļ� ----------------------------------------------------------------*/
#include "led.h"
/* �궨�� ----------------------------------------------------------------*/
#define LED1 P1_0
#define LED2 P1_1
#define LED3 P1_4
#define LED_ON 0
#define LED_OFF 1
#define uint unsigned int
#define uchar unsigned char
/* �ṹ���ö�� ----------------------------------------------------------*/
/* ��������---------------------------------------------------------------*/
/* �ⲿ�������� ----------------------------------------------------------*/

/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
* ��������LedInt
* ������void
* ���أ�void
* ���ߣ�liuping
* ʱ�䣺2020/10/20
* ������led��ʼ��
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
void LedInt(void)
{
  //P1SEL��Ӧ����Ϊͨ��IO�����㣩
  P1SEL &=~0x13;
  //P1SEL��Ӧ����Ϊ�������1��
   P1DIR |=0x13;
   //P1SEL��Ӧ����Ϊ���״̬����1��
   P1 |=0x13;
}
/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
* ��������LedOn
* ������unsigned char ucLedNum 0 ���е�����2 D2 ����3 D3 ��
* ���أ�void
* ���ߣ�liuping
* ʱ�䣺2020/10/20
* ����������
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
void LedOn(unsigned char ucLedNum)
{
  switch(ucLedNum)
  {
  case 0:
    LED1 = LED_ON;
    LED2 = LED_ON;
    LED3 = LED_ON;
    break;
  case 1:
    LED1=LED_ON;
    break;
  case 2:
     LED2=LED_ON;
     break;
  case 3:
    LED3=LED_ON;
    break;
  default:
    break;
  }
}
/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
* ��������LedOff
* ������unsigned char ucLedNum 0 ���е���2 D2��3 D3 ��
* ���أ�void
* ���ߣ�liuping
* ʱ�䣺2020/10/20
* �������ص�
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
void LedOff(unsigned char ucLedNum)
{
   switch(ucLedNum)
  {
  case 0:
    LED1=LED_OFF;
    LED2=LED_OFF;
    LED3=LED_OFF;
    break;
  case 1:
    LED1=LED_OFF;
    break;
  case 2:
     LED2=LED_OFF;
     break;
  case 3:
    LED3=LED_OFF;
    break;
  default:
    break;
  }
}
/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
* ��������LedYoggle
* ������unsigned char ucLedNum
* ���أ�void
* ���ߣ�liuping
* ʱ�䣺2020/10/20
* ��������ת��ɫ
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
void LedYoggle(unsigned char ucLedNum)
{
   switch(ucLedNum)
  {
  case 0:
    LED1=LED_ON;
    LED2=LED_OFF;
    LED3=LED_OFF;
    break;
  case 1:
    LED1=LED_OFF;
    LED2=LED_ON;
    LED3=LED_OFF;
    break;
  case 2:
     LED1=LED_OFF;
    LED2=LED_OFF;
    LED3=LED_ON;
     break;
  default:
    break;
  }
}


