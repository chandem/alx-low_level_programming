#include"main.h"
/**
*_strncat -The function concatenate string.
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
     s1[i] = s2[j];
  }
dest[i+1]='\0';
return (char*)dest;
}
