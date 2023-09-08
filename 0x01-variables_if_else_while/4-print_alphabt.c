#include <stdio.h>
/**
 * main - all letters except q and e
 *
 * Return: 0 after success
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		if (letter != 'e' && letter != 'q')
		{
			putchar(letter);
		}

		letter++;
	}
	putchar('\n');
	
	return(0);

}
