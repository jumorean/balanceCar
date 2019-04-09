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
    for (bright = 102; bright < 1023 ; ++bright)
    {
	    printf("正在加速, 占空比为 : %f\n", bright/1024.0);
      pwmWrite (1, bright) ;
      delay (60) ;
    }

    for (bright = 1023 ; bright >= 102; --bright)
    {
	    printf("正在减速,占空比为 : %f\n", bright/1024.0);
      pwmWrite (1, bright) ;
      delay (60) ;
    }
  }

  return 0 ;
}

