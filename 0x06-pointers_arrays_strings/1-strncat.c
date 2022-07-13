#include"main.h"
/**
*_strcat -The function concatenate string s.
*@dest: it is destination parameter where the string appended
*@src: it is  source parameter where the string copied.
*@n: it is input parameter.
*Return: char(dest).
*/ 
char *_strncat(char *dest, char *src, int n)
{
int i;
int j;
n=strlen(src);
for (i = 0; dest[i]!='\0'; i++);
i=i-1;
  for (j = 0; src[j]!='\0'; j++)
  {
i++;
     dest[i] = src[j];
  }
dest[i+1]='\n';
return (char)dest;
 
}
