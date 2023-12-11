#include "main.h"
/**
 * _isalpha - checks if alphabet is in caps
 * @c: input to be checked
 * Return: returns 0 if success
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}
