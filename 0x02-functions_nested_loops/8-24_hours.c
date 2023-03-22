#include "main.h"

/**
 * jack_bauer - Print
 *
 * Description: Prints time
 *
 * Return: Return 0 (sucess)
*/
void jack_bauer(void)
{
	int s, d, f, g;

for (s = 0; s <= 2; s++)
for (d = 0; d <= 3; d++)
for (f = 0; f <= 5; f++)
for (g = 0; g <= 9; g++)
_putchar(s + '0');
_putchar(d + '0');
_putchar(':');
_putchar(f + '0');
_putchar(g + '0');
_putchar('\n');
}
