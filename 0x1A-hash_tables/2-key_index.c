#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"

/**
 * key_index- functioon that gives the index of a key
 * @key: the key to be looked at
 * @size: the length of the array
 * Return: key index
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hv = hash_djb2(key);

	return (hv % size);
}
