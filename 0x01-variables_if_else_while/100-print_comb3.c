#include <stdio.h>
/**
 * main - printing all numbers
 *
 * Return: zero after success
 */
int main(void)
{
	int i, j;

	for (i = 0; i <= 8; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			putchar('0' + i);
			putchar('0' + j);
			if (i != 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return(0);
}
