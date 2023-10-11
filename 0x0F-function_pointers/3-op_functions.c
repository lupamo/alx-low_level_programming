#include <stdio.h>
#include <stdlib.h>
/**
 * op_sub - subtraction function
 * @a: first argument
 * @b: second argument
 * Return: subtraction of two ints
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_add - addition function
 * @a: first arg to add
 * @b: second arg to add
 * Return: addition of the two ints
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_mul - returns multiplied val
 * @a: first arg to be multiplied
 * @b: second arg to multiply
 * Return: multiplied val of two args
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - returns divided value
 * @a: first argument
 * @b: argument to divide by
 * Return: value after division
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - returns reminde after division
 * @a: first argument
 * @b: second argument
 * Return: modulo of numbers
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
