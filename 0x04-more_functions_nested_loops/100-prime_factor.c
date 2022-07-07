#include<stdio.h>
/**
 * main - Entry point.
 *
 * Return: Return 0.
 */
int main(void)
{
int unsigned long r=612852475143LU;
int unsigned long i;
for(i=2LU;i<r;i++)
{
while(r%i==0)
{
r=r/i;
}
printf("%llu",r);
return 0;
}
}
