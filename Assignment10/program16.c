#include<stdio.h>
#include<string.h>
int main()
{
	char str1[100];
	char str2[100];
	
	printf("Enter a string: ");
	gets(str1);
	
	memcpy(str2,str1,strlen(str1)+1);
	printf("copied string=%s",str2);
	
	return 0;
}
