#include<stdio.h>
int main()
{
	int least=9,large=0,r;
	long x;
	printf("enter the number");
	scanf("%ld",&x);
	while(x>0)
	{
		r=x%10;
		if(r>large){
			large=r;
		}
	if(r<least)
	{
		least=r;
	}
	x=x/10;
	}
	printf("%d ",least);
	printf("%d",large);
	return 0;
}
