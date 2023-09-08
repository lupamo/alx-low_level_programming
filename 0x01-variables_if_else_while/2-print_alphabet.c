#include <stdio.h>
/**
 * main - printing alphabets
 *
 * Return: returns 0 after execution
 */
int main(void)
{
	char letter = 'a';
	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return(0);
}
