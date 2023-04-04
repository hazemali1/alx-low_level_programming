#include "main.h"

/**
 * print_chessboard - Function
 *
 * Description: Print
 *
 * @a: Parameter
*/
void print_chessboard(char (*a)[8])
{
	int s, d, q;

	for (s = 0; s < 8; s++)
	{
		for (d = 0; d < 8; d++)
	{
			q = a[s][d];
			putchar(q);
	}
		putchar('\n');
	}
}
