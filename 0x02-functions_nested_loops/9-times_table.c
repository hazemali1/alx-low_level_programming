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
	int s, d;

for (s = 48; s <= 57; s++)
{
for (d = 48; d <= 57; d++)
{
	_putchar("%d",s * d);
	_putchar(',');
	_putchar(' ');
	_putchar(' ');
}
}
}
