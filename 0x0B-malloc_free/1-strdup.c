#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - returns a pointer to a new str
 * @str: sring to be duplicated
 * Return: str if success or NULL
 */
char *_strdup(char *str)
{
	char *dupstr;
	int i = 0, k = 1;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[k])
	{
		k++;
	}
	dupstr = malloc((sizeof(char) * k) + 1);

	if (dupstr == NULL)
	{
		return (NULL);
	}
	while (i < k)
	{
		dupstr[i] = str[i];
		i++;
	}
	dupstr[i] = '\0';
	return (dupstr);
}
