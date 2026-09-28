#include<stdio.h>
#include<stdio.h>
int main()
{
	char str1[100];
	char str2[100];
	
	printf("Enter a string: ");
	gets(str1);
	
	strcpy(str2,str1);
	
	printf("copied string=%s ",str2);
	
	return 0;
	}
