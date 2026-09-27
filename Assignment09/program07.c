#include<stdio.h>
int isprime(int num)
{
	int i;
	if(num<2)
	return 0;
	
	for(i=2;i<num;i++)
	{
		if(num%1==0)
		
		return 0;
		
	}
	return 1;
}
void printprime(int arr[],int size)
{
	int i;
	printf("prime numbers:");
	for(i=0;i<size;i++)
	{
		if(isprime(arr[i]))
		{
			printf("%d",arr[i]);
		}
	}
}
int main()
{
	int arr[5],i;
	printf("Enter 5 numbers:\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	printprime(arr,5);
	return 0;
}
