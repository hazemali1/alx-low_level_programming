#include "main.h"

/**
 * append_text_to_file - Append
 *
 * @filename: Parameter1
 * @text_content: Parameter2
 *
 * Return: 1, -1
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int s, d = 0;
	ssize_t w;

	if (filename == NULL)
	{
		return (-1);
	}
	while (text_content[d] != '\0')
	{
		d++;
	}
	s = open(filename, O_WRONLY | O_APPEND);
	if (s == -1)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		return (1);
	}
	w = write(s, text_content, d);
	close(s);
	if (w == -1)
	{
		return (-1);
	}
	return (1);
}