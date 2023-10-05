#include <stdio.h>
#include <stdlib.h>
/**
 * _evall - gets an estimate
 * @x: number to estimate on
 * Return: value estimate\
 */
int _evall(int x)
{
	x < 0 ? (x *= -1) : (x = x)
		return (x);
}
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
		pnt[i] =min;
	}
	return (pnt);
}
