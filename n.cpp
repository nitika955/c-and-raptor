#include<stdio.h>
int main()
{
	int r,rev=0,i=1,x,temp,cnt=0;
	printf("enter the number");
	scanf("%d",&x);
	temp=x;
	while(x!=0){
		r=x%10;
		rev=rev*10+r;
		x=x/10;
	}
	printf("rev %d\n",rev);
	while(i<=temp)
	{
	if(rev%i==0)
	cnt=cnt+1;
	i=i+1;
}
if(cnt==2)
	printf("yes");
	else
	printf("no");
	return 0;
}
