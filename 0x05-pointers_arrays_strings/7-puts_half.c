#include <stdio.h>
/**
 * puts_half - prints half
 * @str: string to be printed
 * return: returns 0
 */
void puts_half(char *str)
{
	int i;
	int n;
	int length = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		length++;
	}

	n = (length - 1) / 2;

	for (i = n + 1;  str[i] != '\0'; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
