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
	char *strcat, *zero;
	unsigned int i, leng, j;
	unsigned int size;

	leng = 0;
	zero = "";
	if (s1 == NULL)
		s1 = zero;
	if (s2 == NULL)
		s2 = zero;
	while (s1[leng] != '\0')
		leng++;
	size = (leng + n) * sizeof(*strcat);
	strcat = malloc(size + 1);
	if (strcat == NULL)
		return (NULL);
	i = 0;
	while (i < size && s1[i] != '\0')
	{
		strcat[i] = s1[i];
		i++;
	}
	j = 0;
	while (i < size && s2[j] != '\0')
	{
		strcat[i] = s2[j];
		i++;
		j++;
	}
	strcat[i] = '\0';
	return (strcat);
}
