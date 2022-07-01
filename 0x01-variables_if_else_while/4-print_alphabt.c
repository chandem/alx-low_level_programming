#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: return 0
 */

int main(void)
{
int n;
for(n='a';n<='z';n++)
{
if(n=='e')
continue;
else if(n=='q')
continue;
putchar(n);
}
putchar('\n');
return 0;
}
