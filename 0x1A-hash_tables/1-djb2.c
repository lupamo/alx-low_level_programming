#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"
/**
 * hash_djb2 - writing a djb2 algorithim
 * @str: used to generate hash value
 * Return: hash value
*/

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c;
	}
	return (hash);
}
