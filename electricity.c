#include<stdio.h>
int main()
{
	int unit;
	float amount,charge,total_amount;
	printf("enter total units consumed:");
	scanf("%d",&unit);
if (unit<=50)
{
	amount=unit*2.50;
	charge=30;
}
else if(unit<=100)
{
	amount=unit*3.00;
	charge=50;
}
else if(unit<=200)
{
	amount=unit*3.50;
	charge=75;
}
else if(unit<=300)
{
	amount=unit*4.00;
	charge=100;
}
else if(unit>=300)
{
	amount=unit*5;
	charge=125;
}
total_amount=amount+charge;
printf("electricity bill;%.2f",total_amount);
return 0;


}
