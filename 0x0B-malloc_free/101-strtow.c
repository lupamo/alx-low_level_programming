#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * strtow - prints strings into words
 * @str: string to be splited into words
 * Return: nothing
 */
char **strtow(char *str)
{
	int num_word = 0, i = 0, j = 0;
	char *token;
	char **words;

	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}
	token = strtok(str, " ");
	while (token != NULL)
	{
		num_word++;
		token = strtok(NULL, " ");
	}
	words = (char **)malloc((num_word + 1) *  sizeof(char *));
	if (words == NULL)
	{
		return (NULL);
	}
	token = strtok(str, " ");
	for (i = 0; i < num_word; i++)
	{
		if (words[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(words[j]);
			}
			free(words);
			return (NULL);
		}
		token = strtok(NULL, " ");
	}
	words[num_word] = NULL;
	return (words);
}
