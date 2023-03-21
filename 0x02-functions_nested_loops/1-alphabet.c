#include <stdio.h>
#include "main.h"

/**
 * main - print_alphabet - Print alphabet
 *
 * Description: Printing
 *
 * Return: Returns 0 (sucess)
*/
void print_alphabet(void)
{
	int s;

	for (s = 97; s <= 122; s++)
	{
		putchar(s);
		putchar('\n');
		return;
	}
}
int main(void)
{
	print_alphabet();
	return (0);
}
