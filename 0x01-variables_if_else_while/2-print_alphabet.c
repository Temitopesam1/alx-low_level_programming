#include <stdio.h>
/**
 * main - prints all alphabets in lowercase,
 * followed by a new line
 * Return: always 0 (success)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; ++c)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
