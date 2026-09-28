#include<stdio.h>
#include<string.h>
int main()
{
	char str1[100];
	char str2[100];
	int n;
	
	printf("Enter a string: ");
	gets(str1);
	
	printf("Enter number of character to copy: ");
	scanf("%d",&n);
	
	strncpy(str2,str1,n);
	str2[n]='\0';
	
	printf("copied string=%s ",str2);
	
	return 0;
}
