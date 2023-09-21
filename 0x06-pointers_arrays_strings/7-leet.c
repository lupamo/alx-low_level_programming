#include <stdio.h>
/**
 * leet - returns encoded str
 * @str: string tobe encoded
 * Return: returns encoded str
 */
char *leet(char *str)
{
	int n, k;

	char cap1[] = "aAeEoOtTlL";
	char cap2[] = "4433007711";

	for (n = 0; str[n] != '\0'; n++)
	{
		for (k = 0; k < 10; k++)
		{
			if (str[n] == cap1[k])
			{
				str[n] = cap2[k];
			}
		}
	}
	return (str);
}
