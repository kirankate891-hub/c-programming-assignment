#include<stdio.h>
int main()
{
	int minutes=135;
	int hours,remainingminutes;
	
	hours=minutes/60;
	remainingminutes=minutes%60;
	
	printf("Hours=%d\n",hours);
	printf("Remaining minutes=%d",remainingminutes);
	
	return 0;
}