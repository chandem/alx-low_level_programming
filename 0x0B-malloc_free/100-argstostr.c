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
unsigned int i;
unsigned int j;
unsigned int k;

if(av==NULL || ac==0)
{
return NULL;
}
k=0;
while(ac>=0)
{
for(i=0;av[ac][i]!='\0';i++)
{
k++;
}
ac--;
}
d=(char *)malloc(sizeof(char)*(k+1));
if(d==NULL)
{
return NULL;
}
for(j=0;j<=ac;j++)
{
d[j]=*av[j];
}
return d;
}

