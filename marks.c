#include<stdio.h>
void main()
{
	int a;
	printf("enter marks of the student:");
	scanf("%d",&a);
	if (a>=80)
	{
		printf("GRADE-A");
	}
	else if (a>=70&&a<80)
	{
		printf("GRADE-B");
	}
	else if (a>=60&&a<70)
	{
		printf("GRADE-C");
	}
	else if (a>=50&&a<60)
	{
		printf("GRADE-D");
	}
	else
	{
		printf("FAIL");
	}
}
