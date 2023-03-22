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

for (s = 0; s <= 9; s++)
{
for (d = 0; d <= 9; d++)
{
	_putchar(s * d);
}
}
}
