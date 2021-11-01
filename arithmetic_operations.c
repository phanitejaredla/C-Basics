#include<stdio.h>
void main()
{
	int a=10,b=2;
	printf("Sum of %d and %d is %d \n",a,b,a+b);
	printf("Difference between %d and %d is %d \n",a,b,a-b);
	printf("Product of %d and %d is %d \n",a,b,a*b);
	printf("Quotient when %d is divided by %d is %d \n",a,b,a/b);
	printf("Remainder when %d is divided by %d is %d \n",a,b,a%b);
	printf("Sum of all Arithmetic operations is %d ",(a+b)+(a-b)+(a*b)+(a/b)+(a%b));
}
