//FUNCTION FOR DELAY

#include <time.h>

void delay(int);

void delay(int sec)
	{
		int milsec=1000*sec;
		clock_t start_time=clock();
		while(clock()<start_time+milsec);
	}
	
