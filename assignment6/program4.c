#include<stdio.h>
//1.no argument + No return value
void vowel1()
{
	char ch;
	printf("Enter character:");;
	scanf("%c",&ch);
	
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
	ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
	printf("Vowel\n");
	else
	printf("Consonant\n");
	
}
//2.argument+No return value
void vowel2(char ch)
{	
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
	ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
	printf("Vowel\n");
	else
	printf("Consonant\n");
}

//3.no argument+return value
int vowel3()
{
	char ch;
	printf("Enter character:");
	scanf("%c",&ch);
	
		
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
	ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
	return 1;
	else
	return 0;
}
//4.argument + return value
int vowel4(char ch)
{
		
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
	ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
	return 1;
	else
	return 0;
}
int main()
{
	char ch;
	int result;
	
	//1.no argument+ No return value
	printf("\n---1.No argument+NO return---\n");
	vowel1();
	
	//2.argument+No return value
	printf("\n--2.argument + no return---\n");
	printf("Enter character:");
	scanf("%c",&ch);
	
	vowel2(ch);
	
	//3.no argument+ return 
	printf("\n---3.no argument+return---\n");
	result=vowel3();
	
	if(result==1)
	printf("vowel\n");
	else
	printf("consonant\n");
	
	//4.argument+return
	printf("\n--- 4. Argument + return ---\n");
    printf("Enter character: ");
    scanf(" %c", &ch);

    result = vowel4(ch);

    if(result == 1)
        printf("Vowel\n");
    else
        printf("Consonant\n");


    return 0;
}
	
