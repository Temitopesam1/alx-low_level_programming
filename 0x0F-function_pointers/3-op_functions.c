#include "3-calc.h"

/**
 * op_add - a function that adds numbers
 * @a: first parameter
 * @b: second parameter
 * Return: the sum of a and b.
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - a function that return the difference of two numbers
 * @a: first parameter
 * @b: second parameter
 * Return: the difference of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - a function that multiplies two numbers
 * @a: first parameter
 * @b: second parameter
 * Return: the product od a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - a function that divides two numbers
 * @a: first parameter
 * @b: second parameter
 * Return:  the result of the division of a by b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - a function that gives the remainder of division
 * @a: first parameter
 * @b: second parameter
 * Return: returns the remainder of the division of a by b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
