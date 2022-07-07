#include<stdio.h>
int main(void)
{
int unsigned long r=612852475143LU;
int unsigned long i;
int unsigned long prime=0LU;
for(i=1LU;i<r;i++)
if(r%i==0)
{
prime=i;
}
printf("%llu",prime);
return 0;
}
