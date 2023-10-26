#include <stdio.h>
#include <stdlib.h>
/**
 * print_binary - prints a binary of a number
 * @n: number to be printed
 *
 * Return: an int of binary
 */
void print_binary(unsigned long int n)
{
	int bits;
	int num;
	unsigned int bit;

	bits = 63;
	num = 0;
	while (bits >= 0)
	{
		bit = (n >> bits) & 1;
		if (bit)
		{
			num = 1;
			putchar('1');
		}
		else if (num)
		{
			putchar('0');
		}
		bits--;
	}
	if (num == 0)
	{
		putchar('0');
	}
}
