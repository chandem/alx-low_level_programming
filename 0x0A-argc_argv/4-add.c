#include<stdio.h>
/** 
*main -Entry point.
*@argc: input parameter.
*@argv: input parameter.
*Return: 0
*/
int main (int argc ,char *argv[])
{
int i;
int j;
int r;
if(argc==1)
{
printf ("%d\n","0");
}
if(argv[1]
{
r= (int)argv[1]+(int)argv[2];
printf("%d\n",r);

return 0;
}
else
{
printf("%s\n","error");
return 1;
}

}
