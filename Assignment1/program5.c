#include<stdio.h>
int main()
{
	int num , rev , first, middle,last;
	printf("Enter the 3 digit number:");
	scanf("%d",&num);
	first=num/100;
	middle=(num/10)%10;
	last=num%10;
	
	rev=last*100+middle*10+first;
	if(num==rev)
	printf("palindrome number");
	else
	printf("Not a palindrome number");
	return 0;
}
