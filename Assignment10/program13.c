#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	char set[100];
	char *result;
	
	printf("Enter a string: ");
	gets(str);
	
	printf("Enter character too search: ");
	gets(set);
	
	result=strpbrk(str,set);
	if (result!=NULL)
	{
		printf("First matching character=%c",*result);;
		
	}
	else
	{
		printf("No matching character found");
	}
	return 0;
}
