#include<stdio.h>
#include<limits.h>
void main()
{
   printf("short int:\nsigned:%hd to %hd\n",SHRT_MIN, SHRT_MAX);
   printf("short int:\nunsigned:%d to %hu\n",0,USHRT_MAX);
   printf("int:\nsigned:%d to %d\n",INT_MIN, INT_MAX);
   printf("int:\nunsigned:%u to %u\n",0,UINT_MAX);
   printf("long int:\nsigned:%ld to %ld\n",LONG_MIN,LONG_MAX);
   printf("long int:\nunsigned:%lu to %lu\n",0,ULONG_MAX);
   printf("long long int:\nsigned:%lld to %lld\n",LONG_LONG_MIN, LONG_LONG_MAX);
   printf("long long int:\nunsigned:%llu to %llu\n",0,ULONG_LONG_MAX);	
}
