#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	char sub[100];
	char *result;
	
	printf("Enter a string: ");
	gets(str);
	
	printf("Enter substring to search: ");
	gets(sub);
	
	result=strstr(str,sub);
	
	if(result!=NULL)
	{
		printf("substring found");
		
	}
	else
	{
		printf("substring not found");
	}
	return 0;
}
