#include "main.h"

/**
 * print_last_digit - Print
 *
 * Description: Print last digit
 *
 * @s: Pramater
 *
 * Return: Return 0 (sucess)
*/
int print_last_digit(int s)
{
	if (s < 0)
	{
	s = (-1) * s;
	}
	s = s % 10;
	return (s);
	_putchar(s);
}
