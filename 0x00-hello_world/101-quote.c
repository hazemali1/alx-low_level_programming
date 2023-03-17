#include <unistd.h>

/**
* main - Entry point
*
* Description: print a qoute using write function
*       write(inf fd.const void *buf ,size_t count)
*
*       Return :1 (not success)
*/
int main(void)
{
	char you[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, you, 59);
	return (1);
}
