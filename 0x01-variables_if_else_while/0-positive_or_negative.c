#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
* main - Determine if a number is positve,negative or zero.
*
* Return: Always 0 (success)
*/
int main(void) /*Function for integer*/
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative#n", n);
	}
	return (0);
}