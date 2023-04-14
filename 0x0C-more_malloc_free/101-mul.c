#include <stdlib.h>
#include "main.h"

/**
 * print - print
 *
 * @s: Parameter
*/
void print(char *s)
{
	int d = 0;

	while (s[d])
	{
		_putchar(s[d]);
		d++;
	}
}

/**
 * atoi - Atoi
 *
 * @s: Parameter
 *
 * Return: Return digit
*/
int atoi(const char *s)
{
	int d = 1;
	unsigned long int w = 0, q, e;

	for (q = 0; !(s[q] >= 48 && s[q] <= 57); q++)
	{
		if (s[q] == '-')
		{
			d = d * -1;
		}
	}
	for (e = q; s[e] >= 48 && s[e] <= 57; e++)
	{
		w = w * 10;
		w = w + (s[e] - 48);
	}
	return (d * w);
}

/**
 * printidgit - printing
 *
 * @s: Parameter
 *
 * Return: Return 0
*/
void printidgit(unsigned long int s)
{
	unsigned long int d = 1, w, q;

	for (w = 0; (s / d) > 9; w++, d = d * 10)
	;
	for (; d >= 1; s = s % d, d = d / 10)
	{
		q = s / d;
		_putchar('0' + q);
	}
}

/**
 * main - Main
 *
 * @argc: Parameter1
 * @argv: Parameter2
 *
 * Return: Return 0
*/
int main(int argc, char const *argv[])
{
	(void)argc;

	if (argc != 3)
	{
		print("Error ");
		exit(98);
	}
	printidgit(atoi(argv[1]) * atoi(argv[2]));
	_putchar('\n');
	return (0);
}
