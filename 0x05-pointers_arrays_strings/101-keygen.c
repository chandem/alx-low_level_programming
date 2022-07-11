#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main -Entry point
*
*Return: 0
 */
int main(void)
{
int n;

srand(time(0));
n = rand();
printf("%i\n", n);
return (0);
}
