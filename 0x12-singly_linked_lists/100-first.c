#include <stdio.h>

void alpha(void) __attribute__ ((constructor));
/**
 * alpha - is to be executed before main
 * Return: None
 */
void alpha(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
