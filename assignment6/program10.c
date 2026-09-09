#include<stdio.h>
//no argument and no return type
void message()
{
	printf("student Result program\n");
}

//2 argument and no return type
void checkmarks(int marks)
{
	if(marks<0||marks>100)
	printf("Invalid marks\n");
}

//3 no argument and return type
int getmarks()
{
	int marks;
	
	printf("Enter marks:");
	scanf("%d",&marks);
	
	return marks;
}
//4 argument and return type
int result(int marks)
{
	if(marks>75)
	return 1;
	else if(marks>65)
	return 2;
	else if(marks>=55)
	return 3;
	else if(marks>=40)
	return 4;
	else
	return 5;
}
int main()
{
	int marks,r;
	//type 1
	message();
	
	//type 2
	checkmarks(marks);
	
	//type3
	marks=getmarks();
	
	//type 4
	r=result(marks);
	
	
	if(marks>=0&& marks<=100)
	{
		if(r==1)
		printf("Distinction\n");
		else if(r==2)
		printf("First class\n");
		else if(r==3)
		printf("second class\n");
		else if(r==4)
		printf("pass class\n");
		else
		printf("Fail\n");
		
	}
	return 0;
}
