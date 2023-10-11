#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - a function that iterates using another function
 * @array: an array t be iterated
 * @size: size of iterated arrat
 * @action: array function iterator
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int j = 0;

	if (array != NULL && action != NULL && size > 0)
	{
		while (j < size)
		{
			action(array[j]);
			j++;
		}
	}
}
