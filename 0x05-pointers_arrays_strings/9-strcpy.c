#include <stdio.h>
/**
* char *_strcpy - a function that copies the string point
* @dest: copyt to
* @src: copy from
* Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
