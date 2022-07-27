#include"main.h"
#include<stdlib.h>
/**
*argstostr -function that concatenate given s.
*@av: input parameter.
*@ac: input parameter.
*Return:char
*/
char *argstostr(int ac, char **av)
{ 
char *d;
int i;
int j;
int k;
k=0;
while(ac>=0)
{
for(i=0;av[ac][i]!='\0';i++;k++);
ac--;
}
d=malloc(sizeof(char)*(k+1));
for(j=0;j<ac;j++)
{
d[j]=av[ac];
}
return d;
}
