#include <stdio.h>
/**
 * main - prints out all commands
 * @argc: all comands in function
 * @argv: array of commands
 * Return: 0 after success
 */
int main(int argc, char *argv[])
{
	int c;

	for (c = 0; c < argc; c++)
	{
		printf("%s\n", argv[c]);
	}
	return (0);
}
