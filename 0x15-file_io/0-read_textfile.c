#include "main.h"
#include <stdlib.h>
/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fdescriptor;
	ssize_t w;
	ssize_t t;

	fdescriptor = open(filename, O_RDONLY);
	if (fdescriptor == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	t = read(fdescriptor, buffer, letters);
	w = write(STDOUT_FILENO, buffer, t);

	free(buffer);
	close(fdescriptor);
	return (w);
}
