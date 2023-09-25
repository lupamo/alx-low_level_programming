#include  <stdio.h>
/**
 *  *_strpbrk - locates a string
 *  @s: string to look at
 *  @accept: string to be checked in s
 *  Return: pointer to byte s
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i;

	while (*s != '\0')
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
