#include"main.h"
#include<stddef.h>
#include<stdlib.h>
/**
* create_array -function that create memory with given char.
*@size: input parameter
*@c: input parameter
*Return: char
*/
char *create_array(unsigned int size, char c)
{
char *r;
unsigned int i;
if(size==0)
{
return NULL;
}
else
{
r=malloc(sizeof(c)*size);
if(r==NULL)
{
return NULL;
}
else
{
for(i=0;i<size;i++)
{
r[i]=c;
}
return r;
}
}
}
