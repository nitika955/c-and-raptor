#include<stdio.h>
int main()
{
	int i,n,r,rev=0,num,flag=0;
	printf("enter the value of n");
	scanf("%d",&n);
	num=n;
	while(n!=0)
	{
		r=n%10;
		rev=rev*10+r;
		n=n/10;
	}
	for(i=2;i<num;i++)
	{
		if(num%i==0)
		{
			flag=1;
		}
	}
	for(i=2;i<rev;i++)
	{
		if(rev%i==0)
		{
			flag=1;
		}
	}
	if(flag==0)
	printf("yes");
	if(flag==1)
	printf("no");
	return 0;
}
