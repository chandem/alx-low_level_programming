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
char s1[n]=dest;
char s2[]=src;
int i;
int j;
for (i = 0; s1[i]!='\0'; i++);
i=i-1;
  for (j = 0; s2[j]!='\0'; j++)
  {
i++;
     s1[i] = s2[j];
  }
return (char*)s1;
}
