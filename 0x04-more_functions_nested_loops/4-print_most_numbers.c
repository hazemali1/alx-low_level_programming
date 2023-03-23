#include "main.h"

/**
 * print_most_numbers - Print
 *
 * Description: Print except
 *
 * Return: Return 0 (sucess)
*/
void print_most_numbers(void)
{
	int s;

	while (s >= 48 && s <= 57)
	{
		if (s != 50 && s != 52)
		{
			_putchar(s);
		}
	s++;
	}
	_putchar('\n');
}
