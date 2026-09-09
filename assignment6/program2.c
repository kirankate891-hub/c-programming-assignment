#include<stdio.h>
//1.nno argument and no return 
void palindrome1()
{
	int n, temp, rev=0,rem;
	
	printf("Enter 3 digit number:");
	scanf("%d",&n);
	
	temp =n;
	
	while(n!=0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
		
	}
	if(temp == rev)
	printf("palindrome\n");
	else
	printf("Not palindrome\n");
	
}
// 2.argumment and no return 
void palindrome2(int n)
{
int temp =n,rev=0,rem;

while(n!=0)
{
	rem =n%10;
	rev=rev*10+rem;
	n=n/10;
	
	}
	if(temp==rev)
	printf("palindrome\n");
	else
	printf("Not palindrome\n");
		
}

//3.no argument and return
int palindrome3()
{
	int n, temp,rev=0,rem;
	
	printf("Enter 3 digit number:");
	scanf("%d",&n);
	
	temp = n;
	while(n!=0)
	{
		rem=n%10;
		rev =rev*10+rem;
		n=n/10;
		
	}
	return temp==rev;
	
}

//4.argument and return
int palindrome4(int n)
{
	int temp = n,rev=0,rem;
	while(n!=0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
		
	}
	return temp == rev;
}
int main()
{
	int n,result;
	
	printf("\n---1.NO argument + No return---\n");
	palindrome1();
	
	printf("\n---2. argument+return ---\n");
	printf("Enter 3 digit number:");
	scanf("%d",&n);
	palindrome2(n);
	
	printf("\n---3.NO argument+return---\n");
	result=palindrome3();
	
	if(result)
	printf("palindrome\n");
	else
	printf("Not palinrome\n");
	
	printf("\n---4 argument+return---\n");
	printf("Enter 3 digit number:");
	scanf("%d",&n);
	
	result=palindrome4(n);
	
	if(result)
	
	printf("palindrome\n");
	else
	printf("Not palindrome\n");
	return 0;
}
