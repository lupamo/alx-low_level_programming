#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * get_op_func - gets the correct operation
 * @s: operater value
 * Return: pointer to function required for operation
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"/", op_div},
		{"*", op_mul},
		{"%", op_mod},
		{NULL, NULL}
	};
	int j;

	j = 0;
	while (j < 5)
	{
		if (ops[j].op[0] == s[0])
		{
			return (ops[j].f);
		}
		j++;
	}
	return (NULL);
}
