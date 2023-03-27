#include "main.h"

/**
 * print_rev - Prinnt
 *
 * Description: Rev
 *
 * @s: Parameter
 *
 * Return: Return 0 (sucess)
*/
void print_rev(char *s)
{
	int f, d = 0;

	while (s[d] != '\0')
	{
		d++;
	}
	for (f = d - 1; f >= 0; f--)
	{
		_putchar(s[f]);
	}
		_putchar('\n');
}
