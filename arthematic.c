#include<stdio.h>
int main()
{
	int a,b,c;
	char op;
	printf("enter operaters(+,-,*,/,%):");
	scanf("%c",&op);
	scanf("%d%d",&a,&b);
	switch (op)
	{
		case '+':c=a+b;
		printf("addition is:%d",c);
		break;
		case '-':c=a-b;
		printf("subraction is:%d",c);
		break;
		case '*':c=a*b;
		printf("multipilication is:%d",c);
		break;
		case '%':c=a%b;
		printf("reminder is:%d",c);
		break;
	default:printf("invalid operater");
	break;		
	}
return 0;
}
