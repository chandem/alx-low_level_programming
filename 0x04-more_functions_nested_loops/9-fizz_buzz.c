#include<stdio.h>
/**
*main-entry point
*
*return 0;
*/
int main (void)
{
int i;
for(i=1;i<=100;i++)
{
if(i%3==0)
{
printf("%s","Fizz");
}
if(i%5==0)
{
printf("%s","Buzz");
}
if(i%3==0 && i%5==0)
{
printf("%s","FizzBuzz");
}
else
{
printf ("%d",i);
}
if(i==100)
{
break;
}
printf(" ");
}
printf ("\n");
return 0;
}
