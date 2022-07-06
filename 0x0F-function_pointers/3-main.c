#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - check the code
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0.
 */

int main(int argc, char **argv)
{
	int a, b;
	char c;

	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	func = get_op_func(argv[2]);
	if (!func)
	{
		printf("Error\n");
		exit(99);
	}
	c = *argv[2];
	if ((c == '/' || c == '%') && (b == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", func(a, b));

	return (0);
}
