#include"main.h"
/**
*_strstr -function that search string.
*@haystack: input parameter.
*@needle: input parameter.
*Return: char*.
*/
char *_strstr(char *haystack, char *needle)
{
int i;
int k;
int z;
int j;
i=0;
for(j=0;needle[j]!='\0';j++);
while(haystack[i]!='\0')
{
z=0;
k=0;
while(needle[k]!='\0')
{
if(needle[k]==haystack[i+k])
{
z++;
}
if(z==j-1)
{
return needle;
}
k++;
}
i++;
}
return 0;
}

