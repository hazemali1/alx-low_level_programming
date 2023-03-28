#include "main.h"

/**
 * puts_half - Print
 *
 * Description: Print half
 *
 * @str: Parameter
 *
 * Return: Return 0 (sucess)
*/
void puts_half(char *str)
{
	int d = 0, f;

	while (str[d] != '\0')
	{
		d++;
	}
	if (d % 2 == 1)
	{
		f = (d - 1) / 2;
		f += 1;
	}
	else
	{
	f = d / 2;
	}
	while (f <= d)
	{
		_putchar(str[f]);
		f++;
	}
	_putchar('\n');
}
