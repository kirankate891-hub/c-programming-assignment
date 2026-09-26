#include<stdio.h>
void printstrong(int *n)
{
	int i,temp,digit,j;
	int sum,fact;
	
	for(i=1;i<=*n;i++)
	{
		temp=i;
		sum=0;
		
		while(temp>0)
		{
			digit=temp%10;
			fact=1;
			for(j=1;j<=digit;j++)
			{
				fact=fact *j;
			}
			sum=sum+fact;
			temp=temp/10;
		}
		if(sum==i)
		{
			printf("%d ",i);
			
		}
	}
}
int main()
{
	int n;
	printf("Enter n:");
	scanf("%d",&n);
	
	printstrong(&n);
	
	return 0;
}
			
		
