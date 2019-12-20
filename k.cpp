#include<stdio.h>
int main()
{
	int i=1,n;
	printf("enter the number");
	scanf("%d",&n);
	while(n>0)
	{
		if(n%i==0)
		{
			printf("%d"" ", i);
		}
		i=i+1;
	}
	return 0;
}

