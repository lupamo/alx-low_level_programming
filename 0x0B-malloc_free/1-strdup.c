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
	size_t length = strlen(str);

	if (str == NULL)
	{
		return (NULL);
	}
	dupstr = (char *)malloc((length + 1) * sizeof(char));

	if (dupstr == NULL)
	{
		return (NULL);
	}
	strcpy(dupstr, str);
	free(dupstr);
	return (dupstr);
}
