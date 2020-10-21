/*>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
* 文件名  ： led
* 作者    ： liuping
* 版本    ： V1.0.0
* 时间    ： 2020/10/20
* 简要    ： led驱动头文件  
********************************************************************
* 副本
*
*>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>*/
/* 头文件 ----------------------------------------------------------------*/
#include "led.h"
/* 宏定义 ----------------------------------------------------------------*/
#define LED1 P1_0
#define LED2 P1_1
#define LED3 P1_4
#define LED_ON 0
#define LED_OFF 1
#define uint unsigned int
#define uchar unsigned char
/* 结构体或枚举 ----------------------------------------------------------*/
/* 函数声明---------------------------------------------------------------*/
/* 外部变量引用 ----------------------------------------------------------*/

/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
* 函数名：LedInt
* 参数：void
* 返回：void
* 作者：liuping
* 时间：2020/10/20
* 描述：led初始化
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
void LedInt(void)
{
  //P1SEL对应设置为通用IO（清零）
  P1SEL &=~0x13;
  //P1SEL对应设置为输出（置1）
   P1DIR |=0x13;
   //P1SEL对应设置为灭灯状态（置1）
   P1 |=0x13;
}
/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
* 函数名：LedOn
* 参数：unsigned char ucLedNum 0 所有灯亮；2 D2 亮；3 D3 亮
* 返回：void
* 作者：liuping
* 时间：2020/10/20
* 描述：开灯
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
* 函数名：LedOff
* 参数：unsigned char ucLedNum 0 所有灯灭；2 D2灭；3 D3 灭
* 返回：void
* 作者：liuping
* 时间：2020/10/20
* 描述：关灯
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
* 函数名：LedYoggle
* 参数：unsigned char ucLedNum
* 返回：void
* 作者：liuping
* 时间：2020/10/20
* 描述：翻转灯色
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


