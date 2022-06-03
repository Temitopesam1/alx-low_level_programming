#include <stdio.h>

main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c == 'q' && 'e')
		{
			continue;
		}
		putchar(c);
		putchar(\n);
	}
	return (0);
}
