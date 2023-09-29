#include <stdio.h>
#include <stdlib.h>
/**
 * main - returns number of arguments it has
 * @argc: the variables and functions in it
 * @argv: array of variables and functions
 * Return: 0 after success
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
