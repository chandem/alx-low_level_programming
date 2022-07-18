#include"main.h"
/**
*_memcpy -The functions that copy string.
*@dest: input parameter.
*@src: input parameter.
*@n: input parameter.
*Return: (char)dest.
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{

int j;
for(j=0;j<n && src[j]!='\0';j++)
{
*(dest+j)=*(src+j);
}
return (char*)dest;
}
