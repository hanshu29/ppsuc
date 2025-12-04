
#include<stdio.h>
int Fact(int n,int fact);
int main()
{
	int n,fact=1,c;
	printf("enter a number:");
	scanf("%d",&n);
	c=Fact(n,fact);
	printf("%d",c);
}
int Fact(int n,int fact)
{
	if(n>0)
	{
		fact=fact*n;
		Fact(n-1,fact);
	}
	else
	{
		return fact;
	}
}
