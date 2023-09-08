#include <stdio.h>
/**
 * main - reverse alphabet
 *
 * Return: 0 after success
 */
int main(void)
{
	char letter = 'z';

	while (letter >= 'a')
	{	
		putchar(letter);
		letter--;	
	}

	putchar('\n');

	return (0);
}
