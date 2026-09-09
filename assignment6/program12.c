#include<stdio.h>
//1 no argument and no return type
void message()
{
	printf("Divisibility checking program\n");
}
//2 argument and no return type
void checknumber(int n)
{
	if(n<0)
	printf("please enter a positive number\n");
	
}
//3 no argument and return type
int getnumber()
{
	int n;
	
	printf("Enter a number:");
	scanf("%d",&n);
	
	return n;
}
//4 argument and return type
int checkDivisibility(int n)
{
	if(n%3==0&&n%5==0)
	return 1;
	else if(n%3==0)
	return 2;
	else if(n%5==0)
	return 3;
	else
	return 4;
}
int main()
{
	int n,result;
	//type1
	message();
	
	//type2
	checknumber(n);
	
	//type3
	n=getnumber();
	
	//type4
	result=checkDivisibility(n);
	
	if(result==1)
	printf("Divisiblr by both\n");
	else if(result==2)
	printf("Divisible by 3 but not by 5\n");
	else if(result==3)
	printf("Divisible by 5 but not by 3\n");
	else
	printf("Divisible by None\n");
	
	return 0;
}
