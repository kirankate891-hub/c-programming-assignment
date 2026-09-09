#include<stdio.h>
//1 no argument no return type
void message()
{
	printf("Greatest Number program\n");
}

//2 argument no return type
void checkFirst(int a, int b, int c)
{
	if(a>b)
	{
		if(a>c)
		printf("First number is greatest\n");
	}
}

//3 no argument return type
int getNumber()
{
	int n;
	
	printf("Enter a number:");
	scanf("%d",&n);
	
	return n;
}
// 4 argument return type
int greatest(int a, int b, int c)
{
	if(a>b)
	{
		if(a>c)
		return a;
		else
		return c;
	}
	else
	{
		if(b>c)
		return b;
		else
		return c;
		
	}
}
int main()
{
	int a,b,c,result;
	
	//type1
	message();
	
	//type2
	checkFirst(a,b,c);
	
	//type 3
	printf("\nEnter first number:\n");
	a=getNumber();
	
	printf("Enter second number:\n");
	b=getNumber();
	
	printf("Enter third number:\n");
	c=getNumber();
	
	//type 4
	result=greatest(a,b,c);
	printf("Greatest number =%d\n",result);
	
	return 0;
}
