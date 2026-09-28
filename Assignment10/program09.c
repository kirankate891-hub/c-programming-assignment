#include<Stdio.h>
#include<String.h>
int main()
{
	char str[100];
	char ch;
	char *result;
	
	printf("Enter a string: ");
	gets(str);
	
	printf("Enter character to search: ");
	scanf("%c",&ch);
	
	result=strrchr(str,ch);
	
	if(result!=NULL)
	{
		printf("Last occurence found at position=%d",(int)(result-str+1));
	}
	else
	{
		printf("character not found");
		
	}
	return 0;
}
