#include"main.h"
int main(void)
{
int i;
i=98;
positive_or_negative(i);
return 0;
}
void positive_or_negative(int n)
{


srand(time(0));
n = rand() - RAND_MAX / 2;

if (n == 0)
{
printf("%i is zero\n", n);
}

else if (n < 0)
{
printf("%i is negative\n", n);
}

else
{
printf("%i is positive\n", n);
}

}
