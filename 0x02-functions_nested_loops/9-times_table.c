#include "main.h"
/**
 * times_table - prints time table
 * 
 * Return: 0 success
 */
void times_table(void)
{
	int i, mult, ans;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');
		for (mult = 1; mult <= 9; mult++)
		{
			_putchar(',');
			_putchar(' ');

			ans = i * mult;

			if (ans <= 9)
				_putchar(' ');
			else
				_putchar((ans / 10) + '0');

			_putchar((ans % 10) + '0');
		}
		_putchar('\n');
	}
}
