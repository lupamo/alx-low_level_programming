#include <stdio.h>
#include <string.h>
/**
 * recursive_function - checks if word is unreversible
 * @s: unrevesible word
 * @begin: start of word
 * @end: last index of word
 * Return: 1 if palindrom 0 if not
 */
int recursive_function(char *s, int begin, int end)
{
	if (begin >= end)
	{
		return (1);
	}
	if (s[begin] != s[end])
	{
		return (0);
	}
	return (recursive_function(s, begin + 1, end - 1));
}
/**
 * is_palindrome - checks for palindrome
 * @s: string to check
 * Return: one if successful
 */
int is_palindrome(char *s)
{
	int path = strlen(s);

	return (recursive_function(s, 0, path - 1));
}
