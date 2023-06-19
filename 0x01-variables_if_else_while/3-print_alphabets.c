 #include <stdio.h>
/**
* main - A function that prints the alphabet
*
*
* Return: Always 0 (success)
*/
int main(void)
{
	char alphabet[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

	int i;

for (i = 0; i < 52; i++)
{
putchar(alphabet[i]);
}
putchar('\n');
return (0);
}
