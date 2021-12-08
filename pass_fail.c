#include<stdio.h>
void main()
{
	int E,M,P,C,CS,tot;
	float per;
	printf("enter marks of 5 subjects:");
	scanf("%d%d%d%d%d",&E,&M,&P,&C,&CS);
	if (E>=35&&M>=35&&P>=35&&C>=35&&CS>=35)
	{
		printf("result: PASS\n");
		tot=E+M+P+C+CS;
		per=((tot*1.0)/5);
		printf("%f\n",per);
		if(per>=90)
		{
			printf("O-grade");
		}
		else if(per>=80)
		{
			printf("A-grade");
		}
		else if(per>=70)
		{
			printf("B-grade");
		}
		else if(per>=60)
		{
			printf("C-grade");
		}
		else if(per>=50)
		{
			printf("D-grade");
		}
		else if (per<50)
		{
			printf("E-grade");
		}
	}
	else
	{
		printf("result:fail");
	}
}
