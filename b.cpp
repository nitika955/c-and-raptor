#include<stdio.h>
int main()
{
	int x;
	printf("enter the number");
	scanf("%d",&x);
	if(x%3==0 && x%5==0)
	{
		printf("yes");
	}
    else
	{
   	printf("no");
   }

}
