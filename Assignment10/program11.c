#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	char set[100];
	
	printf("Enter a string: ");
	gets(str);
	
	printf("Enter character to check: ");
	gets(set);
	
	printf("Length=%lu",strspn(str,set));
	
	return 0;
}
