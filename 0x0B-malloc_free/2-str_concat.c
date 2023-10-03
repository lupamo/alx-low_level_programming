#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * str_concat - returns two concatenated strings
 * @s1: to be concatenated with
 * @s2: to be concatenated to s1
 * Return: 0 after success else NULL
 */
char *str_concat(char *s1, char *s2)
{
	int a = 0, k = 0, j = 0, l = 0;
	char *concat;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[a])
	{
		a++;
	}
	while (s2[k])
		k++;
	l = a + k;
	concat = malloc((sizeof(char) * l) + 1);

	if (concat == NULL)
	{
		return (NULL);
	}
	k = 0;
	while (j < l)
	{
		if (j <= l)
			concat[j] = s1[j];
		if (j >= a)
		{
			concat[j] = s2[k];
			k++;
		}
		j++;
	}
	concat[j] = '\0';
	return (concat);

}
