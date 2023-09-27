#include <stdio.h>
/**
 * _puts_recursion - prints a string input
 * @s: the string to be printed
 * return: success nothing
 */
void _puts_recursion(char *s)
{
	while (*s != '\0')
	{
		putchar(*s);
	}
}
