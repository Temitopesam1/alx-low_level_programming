#include <stdio.h>

/**
 * main - finds and prints the sum of the even-valued terms
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	unsigned long int b, c, d, sum;

	b = 1;
	c = 2;

	for (a = 1; a <= 33; ++a)
	{
		if (b < 4000000 && (b % 2) == 0)
		{
			sum = sum + b;
		}
		d = b + c;
		b = c;
		c = d;
	}
	printf("%1lu\n", sum);
	return (0);
}

