#include <stdio.h>

/**
 * main - Print
 *
 * @argc: Parameter1
 * @argv: Parameter2
 *
 * Return: Return 0
*/
int main(int argc, char *argv[])
{
	int s;

	for (s = 0; s < argc; s++)
	{
		printf("%s\n", argv[s]);
	}
	return (0);
}
