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
		str++;
		d++;
	}
	f = d / 2;
	while (f <= d)
	{
		_putchar(str[f]);
		f++;
	}
	_putchar('\n');
}
