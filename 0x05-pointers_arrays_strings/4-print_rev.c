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
	int g, l;
	char a[1000] = s;

	g = _strlen(a);
	for (l = g - 1; l >= 0; l--)
	{
		_putchar(a[l]);
	}
}
