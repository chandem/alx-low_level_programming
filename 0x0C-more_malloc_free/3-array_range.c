#include"main.h"
#include<stdlib.h>
/**
*array_range -function that create array of integers.
*@min: input parameter.
*@max: input parameter.
*Return: int
*/ 
int *array_range(int min, int max)
{
int *g;
int i;
if(min>max)
{
return NULL;
}
g= malloc(sizeof(int)*(max-min))
if(g==NULL)
{
return NULL;
}
for(i=min;i<=max;i++)
{
g[i]=i;
}
return g;
}
