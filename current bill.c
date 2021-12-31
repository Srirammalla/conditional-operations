#include<stdio.h>
void main()
{
	float units,b,c,d;
	printf("enter the number of units");
	scanf("%f",units);
	if(units<=199)
	{
		b=units*1.20;
		printf("the amount charged for %f units is %.2f",units,b);
		printf("\nsurcharge is : 0.00");
		printf("\nthe total amount charged is %f",b);
	}
	else if(units<400)
	{
		b=units*1.5;
		printf("the amount charged for %f units is %.2f",units,b);
		if (b>400)
		{
			c=(15*b)/100;
			printf("\nsurcharge is :%.2f",c);
			d=b+c;
			printf("\ntotal amount charged is %.2f",d);
				}
		else
		{
			printf("\nsurcharge is : 0.00");
			printf("\ntotal amount charged is %.2f",b);
					}}
	else if(units<600)
	{
		b=units*1.80;
		
					}				
}
