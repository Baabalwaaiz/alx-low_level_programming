#include "function_pointers.h"
#include <stdlib.h>

/**
 *i print_name - Prints a name.
 * @name: The name to be printed.
 * @f: A pointer to the function that prints the name.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
