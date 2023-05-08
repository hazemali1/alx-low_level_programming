#include "main.h"

/**
 * read_textfile - Write output
 *
 * @filename: PArameter1
 * @letters: Parameter2
 *
 * Return: Lenght
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int s, d;
	char w[10000];

	if (filename == NULL)
	{
		return (0);
	}
	s = open(filename, O_RDONLY);
	d = read(s, w, letters);
	write(STDOUT_FILENO, w, d);
	return (d);
}
