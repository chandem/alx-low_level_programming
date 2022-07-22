#include<stdio.h>
/** 
*main -Entry point.
*@argc: input parameter.
*@argv: input parameter.
*Return: 0
*/
int main (int argc ,char *argv[])
{
if(argc<3)
{
printf("%s\n","error");
return 1;
}
else
{
int i,j;
int i= atoi argv[1];
int j=atoi argv[2];
int r;
r= i*j;
printf("%d\n",r);

return 0;
}
}
