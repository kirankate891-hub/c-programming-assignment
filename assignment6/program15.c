#include<stdio.h>
//1.no parameter and no return value
void type1()
{
	int i,n;
	
	printf("Enter number:");
	scanf("%d",&n);
	
	for(i=1;i<=10;i++)
	{
		printf("%d ",n*i);
	}
	
}
//2. parameter and no return value
void type2(int n)
{
	int i;
	for(i=1;i<=10;i++)
	{
		printf("%d ",n*i);
		
	}
}
//3. no parameter with return value
int type3()
{
	int i,n;
	printf("Enter number: ");
	scanf("%d",&n);
	
	for(i=1;i<=10;i++)
	{
		printf("%d ",n*i);
		
	}
	return 0;
}

//4.parameter with return value
int type4(int n)
{
	int i;
	for(i=1;i<=10;i++)
	{
		printf("%d ",n*i);
		
	}
	return 0;
	
}
int main()
{
	printf("type 1: ");
	type1();
	
	printf("\ntype 2: ");
	type2(5);
	
	printf("\ntype 3: ");
	type3();
	
	printf("\ntype 4: ");
	type4(5);
	
	return 0;
}
