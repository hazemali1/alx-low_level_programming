#include "main.h"
/**
 * jack_bauer -print
 *
 * Description: print time
 *
 * Return: always 0 (sucess)
 */
void jack_bauer(void)
{
	int m, h;
	for (h = 0 ; h <= 23; h++)
	{
		for (m = 0; m <= 59; m++)
		{
			_putchar((h / 10) + 48);
			_putchar((h % 10) + 48);
			_putchar(':');
			_putchar((m / 10) + 48);
			_putchar((m % 10) + 48);
			_putchar('\n');
		}
	}
}
