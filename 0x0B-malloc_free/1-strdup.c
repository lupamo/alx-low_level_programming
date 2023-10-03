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
	
	if (str == NULL)
	{
		return (NULL);
	}
	dupstr = malloc(strlen(str) + 1);

	if (dupstr == NULL)
	{
		return (NULL);
	}
	strcpy(dupstr, str);
	free(str);
	return (dupstr);
}
