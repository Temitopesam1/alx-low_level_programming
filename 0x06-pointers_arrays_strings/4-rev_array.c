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

<<<<<<< HEAD
	for (i = n - 1; i >= 0; i--)
=======
	j = n - 1;

	for (i = 0; i < n / 2; i++)
>>>>>>> 567c778ab44697a7160d3032cf16a16d41440820
	{
		tmp = a[i];
		a[i] = a[j];
		a[j--] = tmp;
	}
}
