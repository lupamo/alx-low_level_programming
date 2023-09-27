#include <stdio.h>
/**
 * _print_rev_recursion - prints a string in reverse
 * @s: string to be reverse printed
 * return: nothing to be returned
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s - 1);
		putchar(*s);
	}
	else
	{
		putchar('\n');
	}
}
