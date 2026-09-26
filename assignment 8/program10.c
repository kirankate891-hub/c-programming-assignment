#include<Stdio.h>
void printArmstrong(int *n)
{
	int i,temp,digit,sum;
	for(i=1;i<=*n;i++)
	{
		temp=i;
		sum=0;
		
		while(temp>0)
		{
			digit=temp%10;
			sum=sum+(digit*digit*digit);
			temp=temp/10;
			
		}
		if(sum==i)
		{
			
			printf("%d",i);
		}
	}
}
int main()
{
	int n;
	printf("Enter n:");
	scanf("%d",&n);
	
	printArmstrong(&n);
	
	return 0;
}
