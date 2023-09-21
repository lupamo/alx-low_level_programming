#include <stdio.h>
/**
 * cap_string - all characters to upper
 * @s: string to be uppercased
 * Return: uppercased string
 */
char *cap_string(char *s)
{
	int word = 1;

	while (*s != '\0')
	{
		if (
		s[word - 1] == ' ' ||
		s[word - 1] == '\t' ||
		s[word - 1] == '\n' ||
		s[word - 1] == ',' ||
		s[word - 1] == ';' ||
		s[word - 1] == '.' ||
		s[word - 1] == '!' ||
		s[word - 1] == '?' ||
		s[word - 1] == '"' ||
		s[word - 1] == '(' ||
		s[word - 1] == ')' ||
		s[word - 1] == '{' ||
		s[word - 1] == '}' ||
		word == 0)
		{
		word = 1;
		}
		else
		{
			if (word && *s >= 'a' && *s <= 'z')
			{
				*s = *s - 32;
				word = 0;
			}
		}
		s++;
	}
	return (s);
}
