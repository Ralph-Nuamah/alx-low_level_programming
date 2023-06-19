#include <stdio.h>
/**
* main - A function that prints 0 to 9
* Return:0 (success)
*/
int main(void)
{
int i;

for (i = 0; i <= 9; i++)
{
putchar('0' + i);
}

putchar('\n');

return (0);
}
