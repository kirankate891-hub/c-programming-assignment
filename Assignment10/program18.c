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
	
	if(memcmp(str1,str2,strlen(str1)+1)==0)
	{
		printf("Both string are equal");
		
	}
	else
	{
		printf("string are not equal");
		
	}
	return 0;
}

