#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	
	printf("Enter a string: ");
	gets(str);
	
	memmove(str+2,str,strlen(str)+1);
	
	printf("After remove=%s",str);
	
	return 0;
}
