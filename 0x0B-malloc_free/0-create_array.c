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
	unsigned int i;
	char *arr = (char *)malloc(size * sizeof(char));

	while (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
