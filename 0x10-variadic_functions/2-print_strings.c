#include "variadic_functions.h"
/**
 * print_strings -  a function that prints strings, followed by a new line.
 * @separator: the string to be printed between the strings
 * @n: the number of strings passed to the function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int a;
	char * b;
	
	va_list ap;

	va_start(ap, n);

	if(separator)
	{
		for (a = 0; a < n ; a++)
		{
			b = va_arg(ap, char *);
			
			if (!b)
				b = "(nil)";

			if (a == 0)
				printf("%s", b);

			else
				printf("%s%s", separator, b);
		}
	}
	va_end(ap);
	printf("\n");
}
