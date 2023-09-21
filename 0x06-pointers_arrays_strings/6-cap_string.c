#include <stdio.h>
/**
 * cap_string - all characters to upper
 * @s: string to be uppercased
 * Return: uppercased string
 */
char *cap_string(char *s)
{
	int word = 0;

	while (!(s[word] >= 'a' && s[word] <= 'z'))
	{
		word++;
	}
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
		s[word - 1] -= 32;
		word++;
	}
	return (s);
}
