#include "main.h"
/**
 * main - finds buzz
 *
 * Return: returns 0
 */
int main(void)
{
	int i;

	for (int i = 1; i < 100; i++)
	{
		if (i % 3 == 0)
			printf(" Fizz");
		else if (i % 5 == 0)
			printf(" Buzz");
		else if (i % 3 == 0 && i % 5 == 0)
			printf(" FizzBuzz");
		else
			printf(" ", i);
	}
}
