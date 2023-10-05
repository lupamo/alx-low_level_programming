#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - allocates memory of an array
 * @nmemb:array which is allocated
 * @size: number of bytes needed
 * Return: nothing
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pnt;
	unsigned int total;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	pnt = malloc(nmemb * size);
	if (pnt == NULL)
	{
		return (NULL);
	}
	total = 0;
	while (total < nmemb * size)
	{
		pnt[total] = 0;
		total++;
	}
	return (pnt);
}
