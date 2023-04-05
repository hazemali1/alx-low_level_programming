#include "main.h"

/**
 * _print_rev_recursion - Rev
 *
 * @s: Parameter
*/
void _print_rev_recursion(char *s)
{
	if (*s != 0)
	{
		s++;
		_print_rev_recursion(s);
		s--;
	}
	if (*s == 0)
	{
		s--;
	}
	else
	{
		_putchar(*s);
	}
}
