#include<stdio.h>
int main()
{
	int l=0,r;
	long x;
	printf("enter the number");
	scanf("%ld",&x);
	while(x>0)
	{
		r=x%10;
		if(r>l)
		{
		l=r;
		}
	x=x/10;
    }
printf("%ld",l);
return 0;
}
