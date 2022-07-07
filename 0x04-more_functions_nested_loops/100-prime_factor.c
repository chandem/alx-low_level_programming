#include<stdio.h>
int main(void)
{
int r=612852475143;
int i;
int prime;
for(i=1;i<r;i++)
{
if(r%i==0)
{
prime=(r/i);
}

}
printf ("%d",prime);
return 0
}
