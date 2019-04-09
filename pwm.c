//这是一个输出pwm的程序
//输出引脚为GPIO.1


#include <wiringPi.h>

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main (void)
{
  int bright ;

  printf ("Raspberry Pi wiringPi PWM test program\n") ;

  if (wiringPiSetup () == -1)
    exit (1) ;

  pinMode (1, PWM_OUTPUT) ;

  for (;;)
  {	  	  
    for (bright = 102; bright < 1024; ++bright)
    {
	    printf("正在加速, 占空比为 : %f\n", bright/1024.0);
      pwmWrite (1, bright) ;
      delay (30) ;
    }
    for (bright =  1024; bright >= 102; --bright)
    {
	    printf("正在减速,占空比为 : %f\n", bright/1024.0);
      pwmWrite (1, bright) ;
      delay (30) ;
    }
  }

  return 0 ;
}

