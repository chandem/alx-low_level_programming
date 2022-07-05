#include"main.h"
/**
 *main - Entry point
 *
 *Return: return 0
 */
int main (void)
{
print_alphabet_10x();
putchar('\n');
return 0;
}
void print_alphabet_10x(void){
int i;
for(i='a';i<='z';i++)
{
putchar(i);
}
}
