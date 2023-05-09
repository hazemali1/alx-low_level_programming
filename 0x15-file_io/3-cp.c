#include "main.h"

/**
 * main - Main
 *
 * @argc: Parameter1
 * @argv: Parmeter2
 *
 * Return: Always 0
*/
int main(int argc, char *argv[])
{
	int s, d, w, q = 1024, e, r;
	char buff[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	s = open(argv[1], O_RDONLY);
	while (q == 1024)
	{
	q = read(s, buff, 1024);
	if (s == -1 || q == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	d = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	w = write(d, buff, q);
	if (d == -1 || w == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	}
	e = close(s);
	r = close(d);
	if (e == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", s);
		exit(100);
	}
	if (r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", d);
		exit(100);
	}
	return (0);
}
