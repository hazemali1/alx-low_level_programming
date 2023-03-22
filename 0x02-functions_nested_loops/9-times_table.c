#include "main.h"

/**
 * times_table - Print
 *
 * Description: Time table
 *
 * Return: Return o (sucess)
*/
void times_table(void)
{
	int f, s, d;

for (s = 48; s <= 57; s++)
{
for (d = 48; d <= 57; d++)
{
	f = s * d;
	_putchar(f);
	_putchar(',');
	_putchar(' ');
	_putchar(' ');
}
}
}
