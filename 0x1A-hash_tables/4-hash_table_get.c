#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_get- retrives a value from a key
 * @ht: the hash table to get value from
 * @key: the key of the value
 * Return: NULL if not found else value
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i;
	hash_node_t *grep = NULL;

	if (ht == NULL || key[0] == '\0' || key == NULL)
	{
		return (NULL);
	}
	i = key_index((const unsigned char *)key, ht->size);
	grep = ht->array[i];
	while (grep != NULL)
	{
		if (strcmp(grep->key, key) == 0)
		{
			return (grep->value);
		}
	}
	return (NULL);
}
