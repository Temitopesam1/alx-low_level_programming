#include <stdio.h>

/**
 * main - Write a program that prints the numbers from 1 to 100,
 * followed by a new line. But for multiples of three print
 * Fizz instead of the number and for the multiples of five
 * print Buzz.
 * For numbers which are multiples of
 * both three and five print FizzBuzz.
 *
 * Return: always 0 (success).
 */

int main(void)
{
	int a;
	char b[5] = "Fizz";
	char c[5] = "Buzz";
	char d[10] = "FizzBuzz";

	for (a = 1; a <= 100; a++)
	{
		printf("%d\s", a);
		if ((a % 3) == 0)
		{
			printf("%s\s", b);
		}
		else if ((a % 5) == 0)
		{
			printf("%s\s", c);
		}
		else if ((a % 3) && (a % 5) == 0)
		{
			printf("%s\s", d);
		}
	}
}
