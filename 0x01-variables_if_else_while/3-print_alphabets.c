#include <stdio.h>
/**
 * main - prints the alphabet in lowercase, followed by a new line.
 * Return: always 0 (success)
 */
int main(void)
{
	char b, c;

	for (b = 'a'; b <= 'z'; ++b)
	{
		putchar(b);
	}
	for (c = 'A'; c <= 'Z'; ++c)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
