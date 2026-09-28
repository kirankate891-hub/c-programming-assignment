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
	
	printf("Enter number of character to compare: ");
	scanf("%d",&n);
	
	if(strncmp(str1,str2,n)==0)
	{
		printf("First %d character are equal",n);
		
	}
	else
	{
		printf("First %d character are not equal",n);
			
}
return 0;
}
