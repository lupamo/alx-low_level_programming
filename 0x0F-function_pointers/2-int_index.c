#include <stdio.h>
/**
 * int_index - searches for a integer in an aray
 * using a pointer funtion as argument
 * @array: array to be searched
 * @size: size of array to be searched
 * @cmp: function pointer to do the searching
 * Return: searched arrat
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int j;

	if (size < 1 || array == NULL || cmp == NULL)
	{
		return (-1);
	}
	for (j = 0; j < size; j++)
	{
		if (cmp(array[j]))
		{
			return (j);
		}
	}
	return (-1);
}
