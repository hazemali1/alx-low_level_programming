#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/**
 * check - checking if it's digit
 *
 * @s: Parameter
 *
 * Return: Return 0,1
*/
int check(char *s)
{
	unsigned int d = 0;

	while (d < strlen(s))
	{
		if (!isdigit(s[d]))
		{
			return (0);
		}
	d++;
	}
	return (1);
}

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
		if (check(argv[s]))
		{
		q = atoi(argv[s]);
		d = d + q;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", d);
	return (0);
}
