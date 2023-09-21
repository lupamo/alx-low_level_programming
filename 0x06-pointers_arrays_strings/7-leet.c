#include <stdio.h>
/**
 * leet - encodes a letter
 * str: string tobe encoded
 * Return - returns encoded str
 */
char *leet(char *str)
{
	int n = 0;

	while (str[n])
	{
		if(
		str[n] == 'a' || str[n] == 'A' ||
		str[n] == 'e' || str[n] == 'E' ||
		str[n] == 'o' || str[n] == 'O' ||
		str[n] == 't' || str[n] == 'T' ||
		str[n] == 'l' || str[n] == 'L')
		{
			char replaced = '\0';

			if (str[n] == 'a' || str[n] == 'A')
			{
				replaaced = '4';
			}
			else if (str[n] == 'e' || str[n] == 'E')
			{
				replaced = '3';		
			}
			else if (str[n] == 'o' || str[n] == 'O')
			{
				replaced = '0';
			}
			else if(str[n] == 't' || str[n] == 'T')
			{
				replaced = '7';
			}
			else if (str[n] == 'l' || str[n] == 'L')
			{
				reeplaced = '1';
			}
			if (replaced != '\0')
			{
				str[n] = replaced;
			}
		}
		n++;
	}
	return (str);
}
