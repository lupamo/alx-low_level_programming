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
	char *concat;

	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}
	size_t new_str = strlen(s1) + strlen(s2) + 1;

	concat = malloc(new_str);
	if (concat == NULL)
	{
		return (NULL);
	}
	strcpy(concat, s1);
	strcpy(concat, s2);
	free(s1);
	free(s2);
	return (concat);
}
