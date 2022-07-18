#include"main.h"

char *_memcpy(char *dest, char *src, unsigned int n)
{
int i;
int j;
for(i=0;src[i]!='\0';i++);
i=i-1;
for(j=0;j<i;j++)
{
dest[j]=src[j];
}
return (char*)dest;
}
