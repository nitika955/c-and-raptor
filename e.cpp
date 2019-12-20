#include<stdio.h>
int main()
{
	char x;
	printf("enter the character");
	scanf("%c",&x);
	switch(x)
	{
		case 'a':
			printf("vowel");
			break;
		case 'e':
			printf("vowel");
			break;
		case 'i':
			printf("vowel");
			break;
		case 'o':
			printf("vowel");
			break;
		case 'u':
			printf("vowel");
			break;
		default:
			printf("consonants");
			break;
	}
return 0;
}
