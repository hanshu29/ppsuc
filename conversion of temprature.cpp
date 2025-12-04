//conversion of fahreinheit to celsius and vice versa

#include <stdio.h>

int main() 
{  
    float f,c;
    printf("enter f value:");
    scanf("%f",&f);
    c=(f-32)*5/9;
    	printf("%f\n",c);
	printf("enter c value:");
	scanf("%f",&c);
	f=c*9/5+32;
	printf("%f",f);
	return 0;
}

