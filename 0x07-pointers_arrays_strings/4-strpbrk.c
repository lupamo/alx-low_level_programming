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
		char *accept_pnt = accept;

		while (*accept_pnt != '\0')
		{
			if (*s == *accept_pnt)
			{
				return (s);
			}
			accept_pnt;
		}
		s++;
	}
	return (NULL);
}
