#include "main.h"
/**
* print_alphabet - prints alphabet in lowercase
*
* Return: void.
*/
void print_alphabet(void)
{
	/*prints lower alphabets*/
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
