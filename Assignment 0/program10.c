#include<stdio.h>
int main()
{
	int sub1=80,sub2=75,sub3=85,sub4=70,sub5=90;
	int total;
	float percentage;
	
	total=sub1+sub2+sub3+sub4+sub5;
	percentage=total/5.0;
	
	printf("Total marks=%d\n",total);
	printf("percentage=%.2f%%",percentage);
	
	return 0;
}
