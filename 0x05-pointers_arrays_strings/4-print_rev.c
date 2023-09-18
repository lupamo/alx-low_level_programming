#include <stdio.h>
/**
 * print_rev - prints in reverse
 * @s: to be reversed string
 * return: always 1
 */
void print_rev(char *s)
{
	int length = strlen(s);

	for (int i = length - 1; i >= 0; i--)
	{
		printf("%c", s[i]);
	}
	printf("\n");
}
