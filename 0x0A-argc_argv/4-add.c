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
	char *e;

	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}
	for (s = 1; s < argc; s++)
	{
		int r = 0;

		e = argv[s];
		while (e[r] != '\0')
		{
			if (e[r] < 48 && e[r] > 57)
			{
				printf("Error\n");
				return (1);
			}
			r++;
		}
		q = atoi(argv[s]);
		d = d + q;
	}
	printf("%d\n", d);
	return (0);
}
