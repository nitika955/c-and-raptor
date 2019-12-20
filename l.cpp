#include<stdio.h>
int main()
{
	int sum=0,r;
	long x;
	printf("enter the number");
	scanf("%ld",&x);
	while(x!=0)
	{
		r=x%10;
	if(r==8)
	{
		sum=sum+2;
	}
	else if(r==9 || r==6 || r==0 || r==4)
	{
		sum=sum+1;
	}
	x=x/10;
}
	printf("%d",sum);
	return 0;
}
