#include<Stdio.h>
int main()
{
	int arr[100],n,i,num,found=0;
	
	printf("Enter number of elements: ");
	scanf("%d",&n);
	
	printf("Enter elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("Enter number to search:");
		scanf("%d",&arr[i]);
		
	}
	printf("Enter number to search:");
	scanf("%d",&num);
	
	for(i=0;i<n;i++)
	{
		if(arr[i]==num)
		{
			printf("Number found at position %d\n",i+1);
			found=1;
			break;
		}
	}
	if(found==0)
	printf("Number not found\n");
	
	return 0;
}
