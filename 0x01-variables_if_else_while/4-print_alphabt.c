#include <stdio.h>
/**
 * main - prints the alphabet in lowercase, followed by a new line.
 * Return: always 0 (success)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c == 'e')
		{
			continue;
		}
		if (c == 'q')
		{
			continue;
		}
		putchar(c);
	}
	putchar('\n');
	return (0);
}
