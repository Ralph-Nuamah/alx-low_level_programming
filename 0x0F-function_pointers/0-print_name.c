#include "function_pointers.h"
#include <stdio.h>
/**
* print_name - Prints name using a function pointer
* @name: prints name
* @f: function pointer
* Return: void
*/
void print_name(char *name, void (*f)(char *))
{	
	if (name == NULL && f == NULL)

	f(name);
}
