#include<stdio.h>
int main(void)
{
int i,c;
int a=0;
int b=1;
for (i = 1; i<50; i++)
  {
      c=a+b;
      a=b;
      b=c;
    printf("%d", c);
    printf(", ");
  }
printf("\n");
return 0;
}
