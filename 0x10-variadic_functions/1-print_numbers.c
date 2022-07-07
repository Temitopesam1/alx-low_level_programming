#include "variadic_functions.h"
/**
 * print_numbers - a function that prints numbers, followed by a new line.
 * @seperator: the string to be printed between numbers.
 * @n: number of integers passed to the function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int a;
	va_list ap;

	va_start(ap, n);

	if (separator)
	{
		for (a = 0; a < n ; a++)
		{
			if (a == 0)
				printf("%d", va_arg(ap, int));
			else
				printf("%s%d", separator, va_arg(ap, int));
		}
	}
	va_end(ap);
	printf("\n");
}
