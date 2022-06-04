#include <stdio.h>

main(void)
{
	int n;

	for (n = 0; n <= 10; n++)
	{
		putchar(n);
		puthchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
