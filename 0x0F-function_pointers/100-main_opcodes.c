#include <stdio.h>
#include <stdlib.h>

/**
 * main - Main
 *
 * @argc: Parameter1
 * @argv: Parameter2
 *
 * Return: Return 0
*/
int main(int argc, char *argv[])
{
	int s, d;
	int (*q)(int, char **) = main;
	unsigned char w;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	s = atoi(argv[1]);
	if (s < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (d = 0; d < s; d++)
	{
		w = *(unsigned char *)q;
		printf("%.2x", w);
		if (d == s - 1)
			continue;
		printf(" ");
		q++;
	}
	printf("\n");
	return (0);
}
