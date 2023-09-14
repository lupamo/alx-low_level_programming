#include "main.h"

/**
 * more_numbers - prints number to 14
 *
 * Return: returns 1 after success
 */
void more_numbers(void)
{
	char i;
	char j;

	for (i = '0'; i <= '10'; i++)
	{
		for (j = '0'; j <= '14'; j++)
		{
			if (j >= 10)
				_putchar('1');
			_putchar(j % 10 + '0');
		}
		_putchar('\n');
	}
}
