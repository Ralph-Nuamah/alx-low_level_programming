#include <stdio.h>
/**
* main - A function that prints two digits
* Return:0 (success)
*/
int main(void)
{
int i;
for (int i = 0; i <= 9; i++)
{
putchar('0' + i);
if (i < 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
