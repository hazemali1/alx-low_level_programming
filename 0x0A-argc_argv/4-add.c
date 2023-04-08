#include <stdio.h>
#include <stdlib.h>

/**
 * main - Print
 *
 * @argc: Parameter1
 * @argv: Parameter2
 *
 * Return: Return 0,1
*/
int main(int argc, char *argv[])
{
	int s, d = 0, q;

	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}
	for (s = 1; s < argc; s++)
	{
		q = atoi(argv[s]);
			if (q == 0)
			{
				printf("Error\n");
				return (1);
			}
		d = d + q;
	}
	printf("%d\n", d);
	return (0);
}
