#ifndef _SENSOR_H_
#define _SENSOR_H_

/******************************** 头文件 ****************************/
#include "stm32f4xx.h"

/******************************** 函数声明 ****************************/
 /*
  * 功  能：初始化GPIOF7接收光敏传感器0/1信号
  * 参  数：无
  * 返回值：无
  *
 */
void Sensor_Init(void);

#endif
