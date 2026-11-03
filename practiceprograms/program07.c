#include<stdio.h>
int main()
{
	int num,digit,i,count;
	printf("Enter a number: ");
	scanf("%d",&num);
	
	for(i = 0; i<=9;i++)
{
	count=0;
	int temp=num;
	
	while(temp>0)
	{
		digit=temp%10;
		if(digit==i)
		{
			count++;
		}
		temp=temp/10;
			}
if(count>0)
{
	printf("%d appears %d times\n",i,count);
	
}
}
return 0;
}
