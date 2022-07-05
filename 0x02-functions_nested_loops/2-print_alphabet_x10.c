#include"main.h"
/**
 *print_alphabet_x10 print is function
 *
 *prints lowercase 10x
 */
void print_alphabet_x10(void);
void print_alphabet_x10(void){
int j;
for(j=0;j<10;j++)
{
int i;
for(i='a';i<='z';i++)
{
_putchar(i);
}
_putchar('\n');
}
}
