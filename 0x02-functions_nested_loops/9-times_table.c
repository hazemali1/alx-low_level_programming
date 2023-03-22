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
	_putchar(48);
for (d = 48; d <= 57; d++)
{
	_putchar(',');
	_putchar(' ');

	f = s * d;
	if (f <= 9)
		_putchar(' ');
	else
	{
		_putchar((f / 10) + 48);
		_putchar((f % 10) + 48);
	}
}
	_putchar('\n');
}
}
