#include <stdio.h>
/**
 * main - Returns argument
 * Return: 0 sucess
 * @argc: Counts number of arguments
 * @argv: stores the arguments
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0])
	}
	return (0);
}
