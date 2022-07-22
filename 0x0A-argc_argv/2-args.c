#include<stdio.h>
/** 
*main -Entry point.
*@argc: input parameter.
*@argv: input parameter.
*Return: 0
*/
int main (int argc ,char *argv[])
{
(void)argc;
int i;
for(i=0;i<argc-1;i++)
{
printf("%s\n",argv[i]);
}
return 0;
}
