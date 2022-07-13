#include"main.h"
/**
*string_toupper -The function change uppercase letters to lowercase.
*@s: it is input parameter.
*/ 
char *string_toupper(char *s)
{
int i;
for (i = 0; s[i]!='\0'; i++) {
      if(s[i] >= 'a' && s[i] <= 'z') {
         s[i] = s[i] - 32;
      }
   }
}
