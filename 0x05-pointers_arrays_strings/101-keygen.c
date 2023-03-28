#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Create
 *
 * Description: Creating
 *
 * Return: Return 0 (sucess)
*/
int main (void)
{
	int s;
	char d;

	srand(time(NULL));
	while(s <= 2645)
	{
		d = rand() % 128;
		s += d;
		putchar(d);
	}
	putchar(2772 - s);
	return (0);
}
