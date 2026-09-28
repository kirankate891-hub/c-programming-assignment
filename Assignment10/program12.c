#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	char set[100];
	
	printf("Enter a string: ");
	gets(str);
	
	printf("Enter character to search: ");
	gets(set);
	
	printf("Length=%lu",strcspn(str,set));
	
	return 0;
}
