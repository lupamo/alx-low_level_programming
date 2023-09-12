#include "main.h"
/**
 * jack_bauer - prints every min
 *
 * Return: returns void
 */
void jack_bauer(void)
{
	for (int hour = 0; hour <= 23; hour++)
		if (int minute = 0; minute <= 59; minute++)
		{
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar((minute / 10) + '0');
			_putchar((minute % 10) + '0');
			_putchar('\n');
		}
	return (0);
}
