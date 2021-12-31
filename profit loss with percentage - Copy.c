#include<stdio.h>
void main()
{float cost,sell,a,b;
	printf("please enter the cost and sell prises");
	scanf("%f%f",&cost,&sell);
	a=sell-cost;
	b=(a/cost)*100;
	if(a>0)
	{printf("profit amount is %.2f ",a);
	printf("\nprofit percentage is %.2f",b);}
    else if(a==0)
    {printf("profit amount is 0");
    printf("\nprofit percentage is 0");}
	else if(a<0)
	{a=-1*a;printf("loss amount is %.2f",a);
		{
		if(b<0)
		{
		b=-1*b;
		printf("\nloss percentage is %.2f",b);}}}}
