#include "function_pointers.h"

/**
 * print_name - Print
 *
 * @name: Parameter1
 * @f: Parameter2
*/
void print_name(char *name, void (*f)(char *))
{
	if (f && name)
	{
		(*f)(name);
	}
}
