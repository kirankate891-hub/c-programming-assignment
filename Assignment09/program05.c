#include<stdio.h>
void printAlternate(int arr[],int size)
{
	int i;
	for(i=0;i<size;i=i+2)
	{
		printf("%d",arr[i]);
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
	printf("ALternate elements:");
	printAlternate(arr,5);
	
	return 0;
}
