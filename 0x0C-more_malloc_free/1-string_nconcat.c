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
	unsigned int len_1 = strlen(s1);
	unsigned int len_2 = strlen(s2);
	char *strcat;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	if (n >= len_2)
	{
		n = len_2;
	}
	strcat = (char *)malloc(len_1 + n + 1);
	if (strcat == NULL)
	{
		return (NULL);
	}
	strcpy(strcat, s1);
	strncpy(strcat + len_2, s2, n);
	strcat[len_1 + n] = '\0';
	return (strcat);
}
