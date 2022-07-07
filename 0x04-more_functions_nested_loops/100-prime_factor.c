#include<stdio.h>
/**
 * main - Entry point.
 *
 * Return: Always 0.
 */
int main(void)
{
int unsigned long r=612852475143LU;
int unsigned long i;
int unsigned long prime=0LU;
for(i=2LU;i<r;i++)
if(r%i==0)
{
r=r/i;
}
printf("%llu",r);
return 0;
}
