#include<stdio.h>
/* speed */
int main()
{
	float mph,kmph,mps;
	mph=69;
	kmph=mph*1.6;
	mps=kmph*1000/3600;
	
	printf("mph%f kmph%f mps%f",mph,kmph,mps);
}