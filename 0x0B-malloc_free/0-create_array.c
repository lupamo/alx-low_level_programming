#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates an array
 * @size: unsigned int szo of array I think
 * @c: array character
 * Return: 0 if successful or null
 */
char *create_array(unsigned int size, char c)
{
	char *ar;

	while (size != 0)
	{
		ar = malloc(size * sizeof(c));
		printf("ar\n");
	}
	return (NULL);
}
