#include <stdio.h>
#include <stdlib.h>

/**
 * main - change cents
 *
 * @argc: Parameter1
 * @argv: Parameter2
 *
 * Return: Return 0,1
*/
int main(int argc, char **argv)
{
	int s, d = 0, w;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
	s = atoi(argv[1]);
	w = s;
	while (w >= 25)
	{
		w = w - 25;
		d = d + 1;
	}
	while (w >= 10)
	{
		w = w - 10;
		d = d + 1;
	}
	while (w >= 5)
	{
		w = w - 5;
		d = d + 1;
	}
	while (w >= 2)
	{
		w = w - 2;
		d = d + 1;
	}
	while (w >= 1)
	{
		w = w - 1;
		d = d + 1;
	}
	printf("%d\n", d);
	}
return (0);
}
