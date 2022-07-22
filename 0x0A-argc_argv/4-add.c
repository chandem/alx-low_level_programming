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
else

else if((argv[1]>='0' && argv[1]<='9') && (argv[2]>='0' && argv[2]<='9')) 
{
i=atoi(argv[1]);
j=atoi(argv[2]);
r=i+j;
printf("%d\n",r);
return 0;
}
else
{
printf("%s\n","Error");
return 1;
}
}
