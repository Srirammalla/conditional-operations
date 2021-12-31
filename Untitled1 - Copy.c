#include<stdio.h>
void main()
{
	int n;
	printf("enter the number");
	scanf("%d",&n);
	if(n%1==0)
	{
		printf("divisible by 1");
	}
	else
	{
		printf("not divisible by 1");
	}
	if(n%2==0)
	{
		printf("\ndivisible by 2");
	}
	else
	{
		printf("\nnot divisible by 2");
	}
	if(n%3==0)
	{
		printf("\ndivisible by 3");
	}
	else
	{
		printf("\nnot divisible by 3");
	}
	if(n%4==0)
{
	printf("\ndivisible by 4");
}
else
{
	printf("\nnot divisible by 4");
}
if(n%5==0)
{
	printf("\ndivisible by 5");
}
else
{
	printf("\nnot divisible by 5");
}
}

