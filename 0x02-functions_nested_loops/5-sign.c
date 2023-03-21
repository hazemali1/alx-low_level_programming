#include "main.h"

/**
 * print_sign - Digit
 *
 * Description: Checks sign
 *
 * @n: Parmater
 *
 * Return: Return 1,0,-1 (sucess)
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
	}
	return (print_sign(0));
}
