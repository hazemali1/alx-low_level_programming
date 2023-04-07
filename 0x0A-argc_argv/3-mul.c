#include <stdio.h>
#include <stdlib.h>

/**
 * main - Print
 *
 * @argc: Parameter1
 * @argv: Parameter2
 *
 * Return: Return 1
*/
int main(int argc, char *argv[])
{
	if (argc >= 3)
	{
		int s, d;

		s = atoi(argv[1]);
		d = atoi(argv[2]);
	printf("%d\n", s * d);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
