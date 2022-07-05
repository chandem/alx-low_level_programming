#include"main.h"
void times_table(void)
{
int s;
int j;
for(j=0;j<=9;j++)
{
int i;
for(i=0;i<=9;i++)
{
s=i*j;
if(s<=9)
{
_putchar('0' + s);
if(i==9) 
{
break;
}
_putchar(',');
_putchar('  ');


}
else
{
_putchar('0' + s/10);
_putchar('0' + s%10);
if(i==9) 
{
break;
}
_putchar(',');
_putchar('  ');

}
}
_putchar('\n');
}
}
