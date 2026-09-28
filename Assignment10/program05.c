#include<stdio.h>
#include<string.h>
int main()
{
	char str1[100];
	char str2[100];
	
	int n;
	
	printf("Enter first string: ");
	gets(str1);
	
	printf("Enter second string: ");
	gets(str2);
	
	printf("Enter number of cahracter to add: ");
	scanf("%d",&n);
	
	strncat(str1,str2,n);
	
	printf("result=%s",str1);
	
	return 0;
}
