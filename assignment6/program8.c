#include<stdio.h>
/*1. No argument no return value*/
void message()
{
	printf("triagle classification program\n");
}

/*2. argument no return value*/
void checkequilateral(int a,int b,int c)
{
	if(a==b&&b==c)
	printf("Equelateral Triangle\n");
}

//3 no argument return type
int getside()
{
	int side;
	
	printf("Enter one side:");
	scanf("%d",&side);
	
	return side;
}
//4 argument return type

int triangletype(int a,int b,int c)
{
	if(a==b&&b==c)
	return 1;
	else if(a==b||b==c||a==c)
	return 2;
	else
	return 3;
}

int main()
{
	int a,b,c,result;
	//type 1
	message();
	
	//type 2
	checkequilateral(a,b,c);
	
	//type 3
	printf("\nEnter first side:\n");
	a=getside();
	
	printf("Enter second side:\n");
	b=getside();
	
	printf("Enter third side:\n");
	c=getside();
	
	//type 4
	result=triangletype(a,b,c);
	
	if(result == 1)
	printf("Triangle is Equilateral\n");
	else if(result==2)
	printf("Triangle is Isosceles\n");
	else
	printf("Triangle is scalane\n");
	
	return 0;
}
