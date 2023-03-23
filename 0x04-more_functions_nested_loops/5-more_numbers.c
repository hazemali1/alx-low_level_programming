#include "main.h"

/**
 * more_numbers - Print
 *
 * Description: Print 14 times
 *
 * Return: Return 0 (sucess)
*/
void more_numbers(void)
{
	int s, d;

	for (d = 0; d <= 14; d++)
	{
	for (s = 0; s <= 14; s++)
	{
		if (s / 10 >= 1)
		{
			_putchar(49);
		}
		_putchar((s % 10) + 48);
	}
	_putchar('n');
	}
}
