#include"main.h"
#include<stddef.h>
#include<stdlib.h>
/**
*alloc_grid -function that returns two dimensional arrays.
*@width: input parameter
*@height: input parameter.
*Return: int
*/
int **alloc_grid(int width, int height)
{
int **f;
int i;
int j;
f=(int **)malloc(sizeof(int)*(width*height));
if(width<=0 || height<=0)
{
return 0;
}
else
{
for(i=0;i<height;i++)
{
for(j=0;j<width;j++)
{
f[i][j]=0;
}
}
return f;
}
}
