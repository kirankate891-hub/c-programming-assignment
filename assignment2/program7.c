#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter three sides:");
	scanf("%d%d%d",&a,&b,&c);
	
	if(a==b && b==c)
printf("Enquilateral Triangle");
else if(a==b||b==c||a==c)
printf("Isoscales Triangle");
else
printf("Scalene Triangle");
return 0;
}
