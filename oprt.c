#include<stdio.h>
int main()
{
	int a,b,c;
	char ch;
	printf("enter two number \n");
	scanf("%d %d",&a,&b);
	printf(" operators (=,*,/,-)");
	scanf(" %c",&ch);
	switch(ch)
	{
		case'+':
			c=a+b;
			printf("a+b is %d",c);
			break;
		case'-':
			c=a-b;
			printf("a-b is %d",c);
			break;
		case'*':
			c=a*b;
			printf("a*b is %d",c);
			break;
		case'/':
			c=a/b;
			printf("a/b is %d",c);
			break;
			default:
			printf(" invalid operaters plese enter the valid operators");			
	}
	return 0;
}
