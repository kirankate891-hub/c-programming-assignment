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
	
	if(strcoll(str1,str2)==0)
	{
		printf("Both string are equal");
		
	}
	else if(strcoll(str1,str2)<0)
	{
		printf("First string comes before second string");
		
	}
	else
	{
		printf("First string comes after second string");
		
	}

return 0;
}
