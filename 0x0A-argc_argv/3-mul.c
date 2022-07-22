#include<stdio.h>
#include<stdlib.h>
/** 
*main -Entry point.
*@argc: input parameter.
*@argv: input parameter.
*Return: 0
*/
int main (int argc ,char *argv[])
{
int i,j;
int r;
if(argc==3)
{
i= atoi(argv[1]);
j= atoi(argv[2]);
r= i*j;
printf("%d\n",r);
return 0;
}
else
{
printf("%s\n","Error");
return 1;
}
}
