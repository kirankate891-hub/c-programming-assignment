#include<stdio.h>
//1.No argument + No return value
void vote1()
{
	int age;
	printf("Enter age:");
	scanf("%d",&age);
	if(age>=18)
	printf("Eligible for voting\n");
	else
	printf("Not eligible for voting\n");
}
//2.argument+No return value
int vote2(int age)
{
	if(age>=18)
	printf("Eligible for voting\n");
	else
	printf("Not eligible for voting\n");
	}
	
	//3.no argument + return value
	int vote3()
	{
	int age;
	printf("Enter age");
	scanf("%d",&age);
	
	if(age>=18)
	return 1;
	else
	return 0;		
	}
	//4.argument+return value
	int vote4(int age)
	{
		if(age>=18)
		return 1;
		else
		return 0;
	}
	int main()
	{
		int age;
		int result;
		
		//1.No argument + No return 
		printf("\n---1.No argument+No return ---\n");
		vote1();
		
		//2.argument+No return value
		printf("\n---2.argument+No return---\n");
		printf("Enter age:");
		scanf("%d",&age);
		
		vote2(age);
		
		//3.no argument+return value
		printf("\n--no argument+return ---\n");
		result=vote3();
		
		if(result==1)
		printf("Eligible for voting\n");
		else
		printf("Not eligible for voting\n");
		
		//4.argument+return value
		printf("\n---4.argument+return---\n");
		printf("Enter age:");
		scanf("%d",&age);
		
		result=vote4(age);
		
		if(result==1)
		printf("Eligible for voting\n");
		else
		printf("Not eligible for voting\n");
		
		return 0;
	}
			
