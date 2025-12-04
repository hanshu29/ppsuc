#include<stdio.h>
int main()
{
	int a[5]={5,4,3,2,1},i,j,temp,n=5;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	for(i=0;i<=n-1;i++)
	{
		printf("%d",a[i]);
	}
}
    
