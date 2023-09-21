#include <stdio.h>
/**
 * cap_string - all characters to upper
 * @str: string to be uppercased
 * Return: uppercased string
 */
char *cap_string(char *str)
{
	int index = 0;
	int new_word = 1;

	while (str[index])
	{
		char current_char = str[index];

		if (
		current_char == ' ' ||
		current_char == '\t' ||
		current_char == '\n' ||
		current_char == ',' ||
		current_char == ';' ||
		current_char == '.' ||
		current_char == '!' ||
		current_char == '?' ||
		current_char == '"' ||
		current_char == '(' ||
		current_char == ')' ||
		current_char == '{' ||
		current_char == '}' ||
		index == 0)
		{
			new_word = 1;
		}
		else
		{
			new_word = 0;
		}
		index++;
	}
	return (str);
}
