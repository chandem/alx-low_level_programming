include"main.h"
void jack_bauer(void){
int j;
for(j=0;j<=23;j++)
{
int i;
for (i=0;i<=60;i++)
{
_putchar('0'+j%10);
_putchar('0'+j/10);
_putchar(':');
_putchar('0'+i%10);
_putchar('0'+i/10);
}
}
}

