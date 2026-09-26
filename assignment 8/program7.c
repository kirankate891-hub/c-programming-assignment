#include<stdio.h>
void checkpalindrome(int *n)
{
	int temp,digit,reverse=0;
	temp=*n;
	while(temp>0)
	{
		digit=temp%10;
		reverse=reverse*10+digit;
		temp=temp/10;
		}	
		if(reverse==*n)
		printf("palindrome");
		else
		printf("Not palindrome");
}
int main()
{
	int n;
	printf("Enter number: ");
	scanf("%d",&n);
	
	checkpalindrome(&n);
	
	return 0;
}
