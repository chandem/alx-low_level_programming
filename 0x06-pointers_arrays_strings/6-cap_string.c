#include"main.h"
/**
*cap_string -The function change uppercase letters to lowercase.
*@s: it is input parameter.
*Return: (char*)s
*/ 
char *cap_string(char *s)
{
int i;
for (i = 0; s[i]!='\0'; i++) 
{
      if(s[i] >= 'a' && s[i] <= 'z')
 {
         s[i] = s[i] - 32;
      }
   }
return (char*)s;
}
