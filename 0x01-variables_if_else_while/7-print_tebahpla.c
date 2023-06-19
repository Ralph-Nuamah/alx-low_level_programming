#include <stdio.h>
/**
* main - A function that prints lowercase in reverse
* Return:0 (success)
*/
int main(void)
{
char ch = 'z';

while (ch >= 'a')
{
putchar(ch);
ch--;
}
putchar('\n');
return (0);
}

