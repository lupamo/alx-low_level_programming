#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - arranges array from min to max
 * @min: less value
 * @max: more value
 * Return: Nothing
 */
int *array_range(int min, int max)
{
	int *pnt;
	int estm, i;

	if (min > max)
	{
		return (NULL);
	}
	estm = max - min + 1;
	pnt = malloc(estm * sizeof(*pnt));
	if (pnt == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < estm; min++, i++)
	{
		pnt[i] = min;
	}
	return (pnt);
}
