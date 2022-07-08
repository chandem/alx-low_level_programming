#include<stdio.h>
/**
 * main - Entry point.
 *
 * Return: Return 0.
 */
int main(void)
{
  long r=612852475143;
 long i;
for(i=2;i<r;i++)
{
while(r%i==0)
{
r=r/i;
}
}
printf("%lu\n",r);
return 0;
}
