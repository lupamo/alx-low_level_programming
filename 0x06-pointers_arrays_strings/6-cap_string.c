#include <stdio.h>
/**
 * cap_string - all characters to upper
 * @str: string to be uppercased
 * Return: uppercased string
 */
char *cap_string(char *str)
{
	int i = 0;
	int new_word = 1;

	while (str[i])
	{
		if (
		str[i] == ' ' ||
		str[i] == '\t' ||
		str[i] == '\n' ||
		str[i] == ',' ||
		str[i] == ';' ||
		str[i] == '.' ||
		str[i] == '!' ||
		str[i] == '?' ||
		str[i] == '"' ||
		str[i] == '(' ||
		str[i] == ')' ||
		str[i] == '{' ||
		str[i] == '}')
		{
			new_word = 1;
		}
		else if (new_word && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
			new_word = 0;
		}
		i++;
	}
	return (str);
}
