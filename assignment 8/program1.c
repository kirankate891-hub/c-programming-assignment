#include<Stdio.h>
void printnumbers(int *start,int*end)
{
	int i;
	for(i=*start;i<=*end;i++)
	{
		printf("%d",i);
	}
}
int main()
{
	int start=1,end=10;
	printnumbers(&start,&end);
	return 0;
}
