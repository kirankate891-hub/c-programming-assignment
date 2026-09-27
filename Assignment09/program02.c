#include<stdio.h>
void searchNumber(int arr[],int size,int num)
{
	int i,found=0;
	for(i=0;i<size;i++)
	{
		if(arr[i]==num)
		
		{
			printf("Number found at position %d\n",i+1);
			
			found=1;
			break;
		}
	}
	if(found==0)
	{
		printf("Number not found\n");
		
	}
	
}
int main()
{
	int arr[5],i,num;
	printf("Enter 5 number:\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
		
	}
	printf("Enter number to search:");
	scanf("%d",&num);
	
	searchNumber(arr,5,num);
	
	return 0;
	
	}
