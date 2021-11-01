#include<stdio.h>
void main()
{
	int a=10,b=2,s,d,p,q,r;
	printf("Sum of %d and %d is %d \n",a,b,s=a+b);
	printf("Difference between %d and %d is %d \n",a,b,d=a-b);
	printf("Product of %d and %d is %d \n",a,b,p=a*b);
	printf("Quotient when %d is divided by %d is %d \n",a,b,q=a/b);
	printf("Remainder when %d is divided by %d is %d \n",a,b,r=a%b);
	printf("Sum of all Arithmetic operations is %d ",s+d+p+q+r);
}
