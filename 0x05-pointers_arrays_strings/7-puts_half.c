#include <stdio.h>
/**
 * puts_half - prints half
 * @str: string to be printed
 * return: returns 0
 */
void puts_half(char *str)
{
	int i;
	int j;
	int length;

	for (i = 0; str[i] != '\0'; i++)
	{
		length++;
	}

	j = (length - 1) / 2;

	for (i = j + 1;  str[i] != '\0'; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
