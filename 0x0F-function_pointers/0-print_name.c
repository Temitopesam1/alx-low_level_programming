#include "function_pointers.h"

/**
 * print_name -  a function that prints a name.
 * @name: parameter that accepts a name argument.
 * @f: this is a pointer function.
 *
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
