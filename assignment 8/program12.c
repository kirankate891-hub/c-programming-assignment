#include<stdio.h>
void printperfect(int *n)
{
	int i,j,sum;
	for(i=1;i<=*n;i++)
	{
		sum=0;
		for(j=1;j<i;j++)
		{
			if(i%j==0)
			{
				sum=sum+j;
			}
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
	printf("Enter n: ");
	scanf("%d",&n);
	
	printperfect(&n);
	
	return 0;
}
