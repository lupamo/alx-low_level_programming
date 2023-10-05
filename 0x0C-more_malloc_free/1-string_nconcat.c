#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concats strings in arguments
 * @s1: string 1 to be concated
 * @s2: string 2 to be concated
 * @n: number of byte of first s2 bytes
 * Return: NULL if error occurs
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int j, leng, i;
	unsigned int weigh;
	char *strcat, *nune;

	leng = 0;
	nune = "";

	if (s1 == NULL)
		s1 = nune;
	if (s2 == NULL)
		s2 = nune;
	while (s1[leng] != '\0')
	{
		leng++;
	}
	weigh = (leng + n) * sizeof(*strcat);
	strcat = malloc(weigh + 1);
	if (strcat == NULL)
		return (NULL);
	j = 0;
	while (j < weigh && s1[j] != '\0')
	{
		strcat[j] = s1[j];
		j++;
	}
	i = 0;
	while (i < weigh && s2[i] != '\0')
	{
		strcat[i] = s2[i];
		i++;
	}
	while (j < weigh && s2[i] != '\0')
	{
		strcat[j] = s2[i];
		j++;
		i++;
	}
	strcat[j] = '\0';
	return (strcat);
}
