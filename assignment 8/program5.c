#include<stdio.h>
void checkArmstrong(int *n)
{
	int temp,digit,sum=0;
	temp=*n;
	while(temp>0)
	{
		digit=temp%10;
		sum=sum+(digit*digit*digit);
		temp=temp/10;
	}
	
if(sum==*n)
 	printf("Armstrong");
else

	printf("Not Armstrong");
}
int main()
{
	int n;
	printf("Enter number: ");
	scanf("%d",&n);
	
	checkArmstrong(&n);
	return 0;
	
}
