#include "main.h"
/**
 * times_table - prints time table
 * 
 * Return: 0 success
 */
void times_table(void)
{
	int i,j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			_putchar("%2d, ", i * j);
			_putchar('\n');
		}
		_putchar('\n');
	}
}
