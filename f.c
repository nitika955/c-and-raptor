#include<stdio.h>
int main()
{
	int x,y,z;
	printf("enter the numbers");
	scanf("%d",&x);
	scanf("%d",&y);
	scanf("%d",&z);
	if (x>y && x>z)
	{
		printf("%d",y*z);
	}
	else if(y>z)
	{
		printf("%d",x*z);
	}
	else
	{
		printf("%d",x*y);
	}
return 0;
}
