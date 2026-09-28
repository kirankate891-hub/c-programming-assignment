#include<Stdio.h>
#include<string.h>
int main()
{
	char str[100];
	char ch;
	char *result;
	
	printf("Enter a string: ");
	gets(str);
	
	printf("Enter character to search: ");
	scanf("%c",&ch);
	
	result=memchr(str,ch,strlen(str));
	
	if(result!=NULL)
	{
		printf("character found at position=%d",(int)(result-str+1));
	}
	else
	{
		printf("character not found");
	}
	return 0;
}
