#include"main.h"
/**
*print_chessboard -function that prints chessboard.
*@a: input parameter.
*/
void print_chessboard(char (*a)[8])
{
int i;
int j;
j=0;
while (j<8)
{
i=0;
while(i<8)
{
printf("%c",a[j][i]);
i++;
}
printf("\n");
j++;
}
}
