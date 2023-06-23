#include "main.h"
/**
 * print_numbers - Print from 0 to 9
 * Return: No return, void
 */
void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
