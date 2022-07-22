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
int r;
r= argv[1]*argv[2];
printf("%s\n",r);

return 0;
}
