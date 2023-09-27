#include <stdio.h>
/**
 * is_palindrome - checks if word is unreversible
 * @s: unrevesible word
 * @begin: start of word
 * @end: last index of word
 * Return: 1 if palindrom 0 if not
 */
int is_palindrome(char *s, int begin, int end)
{
	if (begin >= end)
	{
		return (1);
	}
	if (s[begin] != s[end])
	{
		return (0);
	}
	return (is_palindrome(s, begin + 1, end - 1));
}
