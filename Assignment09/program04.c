#include<Stdio.h>
void findoddeven(int arr[],int size)
{
	int i;
	printf("Even numbers:");
	for(i=0;i<size;i++)
	{
		if(arr[i]%2==0)
		{
			printf("%d",arr[i]);
			
		}
	}
	printf("\nodd numbers:");
	for(i=0;i<size;i++)
	{
		if(arr[i]%2!=0)
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
	findoddeven(arr,5);
	return 0;
	
}
