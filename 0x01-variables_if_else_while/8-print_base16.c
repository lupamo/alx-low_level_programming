#include <stdio.h>
/**
 * main - hexadecimal numbers
 *
 * Return: returns 0 after executing
 */
int main(void)
{
	int i;

	for (i =0; i <= 9; i++)
	{
		putchar('0' + i);
	}

	for (i = 0; i < 6; i++)
	{
		putchar('a' + i);
	}
	putchar('\n');

	return (0);
}
