#include <stdio.h>
/**
 * rev_string - reverses a string
 * @s: string to be reversed
 * return: always 1
 */
void rev_string(char *s)
{
	int length;
	int i;

	length = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		length++;
	}
	for (i = length - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
