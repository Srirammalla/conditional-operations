#include<stdio.h>
void main()
{
	int cost,sell;
	printf("please enter the cost and sell prises");
	scanf("%d%d",&cost,&sell);
	if(cost<sell)
	{
		printf("profit");
	}
	else if(cost==sell)
	{
		printf("zero");
	}
	else
	{
		printf("loss");
	}
}
