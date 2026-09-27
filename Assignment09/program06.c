#include<stdio.h>
void addArrays(int arr1[],int arr2[],int arr3[],int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		arr3[i]=arr1[i]+arr2[i];
	}
}
int main()
{
	int arr1[5],arr2[5],arr3[5];
	int i;
	
	printf("Enter 5 elements for first array:\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr1[i]);
		
	}
	printf("Enter 5 elements for second array:\n");
	
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr2[i]);
		
		
	}
	addArrays(arr1,arr2,arr3,5);
	printf("Third array (sum):\n");
	for(i=0;i<5;i++)
	{
		printf("%d",arr3[i]);
		
	}
	return 0;
}
