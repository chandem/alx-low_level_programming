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
(void)argc;
else
{
int r;
r= (int)argv[1]+(int)argv[2];
printf("%d\n",r);

return 0;
}
}
