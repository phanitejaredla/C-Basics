#include<stdio.h>
void main()
{
	int a,b;
	printf("enter two values:");
	scanf("%d%d",&a,&b);
	if (a>b)
	{
		printf("%d is the largest",a);
	}
	else
	{
		printf("%d is the largest",b);
	}
}
