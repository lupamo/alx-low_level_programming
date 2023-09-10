#include <stdio.h>
/**
 * main - prints all 3 nums
 *
 * Return: returns 0 after success
 */
int main(void)
{
	int i, j;

	for (i = 0; i <= 99; i++)
	{
		for (j = i + 1; j <= 99; j++)
		{
			if (i != 0 || j != 0)
			{
				if (i < 10)
				{
					putchar('0');
				}
				printf("%d ", i);
				if (j < 10)
				{
					putchar('0');
				}
				printf("%d", j);
				if (i != 99 || j != 98)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
