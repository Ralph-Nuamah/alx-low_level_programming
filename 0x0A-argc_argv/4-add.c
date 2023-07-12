#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - Takes in positive numbers
 * @argc: Counts number of arguments
 * @argv: takes in arguments
 * Return: 1 for fail and 0 for success
 */
int main(int argc, char *argv[])
{

	int sum;
	int i;
	int j;
	int num;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}

		 num = atoi(argv[i]);
		sum += num;
	}

	printf("%d\n", sum);
	return (0);
}
