#include <stdio.h>
/**
 * _puts_recursion - prints a string input
 * @s: the string to be printed
 * return: success nothing
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		putchar(*s);
		_puts_recursion(s + 1);
	}
	putchar('\n');
}
