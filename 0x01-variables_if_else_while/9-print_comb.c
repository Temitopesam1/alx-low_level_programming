#include <stdio.h>
/**
 * main -  prints all possible combinations of single-digit numbers.
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	for (n = 0; n <= 10; n++)
	{
		putchar(n);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}