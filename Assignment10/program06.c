#include<stdio.h>
#include<string.h>

int main()
{
	char str1[100];
	char str2[100];
	
	printf("Enter first string: ");
	gets(str1);
	
	printf("Enter second string: ");
	gets(str2);
	
	if (strcmp(str1,str2)==0)
	{
		printf("Both string are equel");
		
	}
	else
	{
		printf("strings are not equel");
		
		
	}
	return 0;
}
