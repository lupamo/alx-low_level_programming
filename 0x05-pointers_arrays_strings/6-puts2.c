#include <stdio.h>
/**
* puts2 - prints every string
* @str: input parameter
* Return: always 1
*/
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{

		if (i % 2 == 0)
		_putchar(str[i]);
	}
	_putchar ('\n');
}
