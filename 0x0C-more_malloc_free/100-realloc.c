#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _realloc - reallocates a memory of previous block
 * @ptr: pointer to previous memory
 * @old_size: size of ptr
 * @new_size: new byte size of ptr
 * Return: pointer to a new memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr_top;
	unsigned int j;

	if (ptr == NULL)
	{
		ptr_top = malloc(new_size);
		return (ptr_top);
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (old_size == new_size)
	{
		return (ptr);
	}
	ptr_top = malloc(new_size);
	if (ptr_top == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < old_size && j < new_size; j++)
	{
		ptr_top[j] = ((char *)ptr)[j];
	}
	free(ptr);
	return (ptr_top);
}
