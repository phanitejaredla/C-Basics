#include<stdio.h>
#include<limits.h>
void main()
{
	printf("SHORT INT :\n signed: %hd to %hd\n",SHRT_MIN,SHRT_MAX);
	printf("Unsigned: %hd to %hu\n",0,USHRT_MAX);
	printf("INT :\n signed: %d to %d\n",INT_MIN,INT_MAX);	
	printf("Unsigned: %u to %u\n",0,UINT_MAX);
	printf("LONG INT :\n signed: %ld to %ld\n",LONG_MIN,LONG_MAX);	
	printf("Unsigned: %lu to %lu\n",0,ULONG_MAX);
	printf("LONG LONG INT :\n signed: %lld to %lld\n",LONG_LONG_MIN,LONG_LONG_MAX);	
	printf("Unsigned: %llu to %llu\n",0,ULONG_LONG_MAX);
	
}
