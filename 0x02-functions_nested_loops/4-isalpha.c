#include "main.h"
/**
 * _isalpha - checks if alphabet is in caps
 * @c: input to be checked
 * Return: returns 0 if success
 */
int _isalpha(int c)
{
	for ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
