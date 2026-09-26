#include<stdio.h>
void checkstrong(int *n)
{
	int temp,digit,i;
	int sum=0;
	int fact;
	
	temp=*n;
	
	while(temp>0)
	{
		digit=temp%10;
		
		fact=1;
		for(i=1;i<=digit;i++)
		{
			fact=fact*i;
			
		}
		sum=sum+fact;
		temp=temp/10;
	}
	if(sum==*n)
	printf("strong");
	else
	printf("Not strong");
	
}
int main()
{
	int n;
	printf("Enter numer: ");
	scanf("%d",&n);
	
	checkstrong(&n);
	
	return 0;
}
