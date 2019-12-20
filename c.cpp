#include<stdio.h>
int main()
{
	char x;
	printf("enter the character");
	scanf("%c",&x);
	if(x>=65 && x<=90)
	{
		printf("upper case");
	}
	else if(x>=97 && x<=122)
	{
	    printf("lower case");   
	}
	else 
	{
		printf("digit");
	}
}
	
