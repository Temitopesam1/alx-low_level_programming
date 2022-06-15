#include "main.h"
#include <string.h>

/**
 * reverse_array -  a function that reverses the
 * content of an array of integers.
 * @a: first parameter.
 * @n: second parameter.
 * Return: 0
 */

void reverse_array(int *a, int n)
{
	int i, j, tmp;

	j = n - 1;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j--] = tmp;
	}
}
