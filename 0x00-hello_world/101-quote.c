#include <unistd.h>

int main(void)
{
	char youssef[]="and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	
	write(1, youssef, 59);
	return (1);
}
