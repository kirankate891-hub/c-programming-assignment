#include<Stdio.h>
void checkperfect(int*n)
{
	int i,sum=0;
	for(i=1;i<*n;i++)
	{
		if(*n%i==0)
		{
			sum=sum+i;
			
		}
	}
	if(sum==*n)
	printf("perfect");
	else
	
	printf("Not perfect");
	
}
int main()
{
	int n;
	printf("Enter number: ");
	scanf("%d",&n);
	
	checkperfect(&n);
	
	return 0;
}
