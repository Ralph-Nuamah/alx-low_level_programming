#include "main.h"
/**
 * print alphabets - print alphabet 10x
 * Return: no return, its void
 */
void print_alphabet_x10(void)
{
int i = 0;

while (i < 10)
{
	print_alphabet();
	_putchar("\n");
	i++;
}
}
