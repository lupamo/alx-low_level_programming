#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * malloc_checked - allocates memory & prints pointer
 * @b: number of memory to be allocated
 * Return: pointeer of allocated mem
 */
void *malloc_checked(unsigned int b)
{
	void *point = malloc(b);

	while (point == NULL)
	{
		exit(98);
	}
	return (point);
}
