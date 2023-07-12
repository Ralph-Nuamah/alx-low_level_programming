#include <stdio.h>
/**
 * main - Returns argument
 * Return: 0 sucess
 * @argc: Counts number of arguments
 * @argv: stores the arguments
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
