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
{
i=atoi(argv[1]);
j=atoi(argv[2]);
r=i+j;
printf("%d\n",r);
return 0;
}
else
{
printf("%s\n","error");
return 1;
}

}
