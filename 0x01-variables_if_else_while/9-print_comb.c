#include <stdio.h>
/**
 * main - allnums printed
 *
 * Return: return 0
 */
int main(void)
{
	int k, l;

	for (k = 0; k <= 9; k++)
	{
		for (l = k + 1; l <= 9; l++)
		{
			putchar('0' + k);
			putchar(',');
			putchar(' ');
			putchar('0' + l);

			if (k !=8 || l != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
