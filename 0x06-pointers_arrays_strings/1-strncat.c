#include"main.h"
/**
*_strncat -The function concatenate two strings.
*@dest: it is destination parameter where the string appended
*@src: it is  source parameter where the string copied.
*@n: it is input parameter.
*Return: char(dest).
*/ 
char *_strncat(char *dest, char *src, int n)
{
int i;
int j;
for (i = 0; src[i]!='\0'; i++);
i=i-1;
  for (j = 0;j<n && dest[j]!='\0'; j++)
  {
i++;
     dest[i] = src[j];
  }
return (char*)dest;
}
