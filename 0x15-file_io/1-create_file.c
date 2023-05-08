#include "main.h"

/**
 * create_file - Create
 *
 * @filename: PArameter
 * @text_content: Parameter2
 *
 * Return: 1, -1
*/
int create_file(const char *filename, char *text_content)
{
	int s, d = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	while (text_content[d] != '\0')
	{
		d++;
	}
	s = open(filename, O_WRONLY | O_CREAT, 0600);
	if (s == -1)
	{
		return (-1);
	}
	write(s, text_content, d);
	close(s);
	return (1);
}
