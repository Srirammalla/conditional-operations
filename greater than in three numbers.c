#include<stdio.h>
void main()
{
	int x,y,z;
	printf("please enter the two numbers");
	scanf("%d%d%d",&x,&y,&z);
	if(x>y&&x>z)
	{
		printf("%d",x);
	}
	if(y>x&&y>z)
	{
		printf("%d",y);
	}
   if(z>x&&z>y)
{
	printf("%d",z);
}
else if (x==y && y==z)
{
	printf("%d",x);
}
}
