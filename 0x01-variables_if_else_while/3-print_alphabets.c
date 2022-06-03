#include <stdio.h>

main(void)
{
	char b, c;

	for (b = 'a'; b <= 'z'; ++b)
	{
		putchar(b);
		for (c = 'A'; c <= 'Z'; ++c)
		{
			putchar(c);
			putchar(\n);
		}
	}
	return (0);
}
