#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_set- adds or updates a key value
 * @ht: hash table array
 * @key: key to be added or updated
 * @value: value to be added or updated
 * Return: 1 if successful or 0 if not
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *node_new, *current_n;

	if (key == NULL || ht == NULL || *key == '\0')
	{
		return (0);
	}
	idx = key_index((const unsigned char *)key, ht->size);
	current_n = ht->array[idx];

	while (current_n)
	{
		if (strcmp(current_n->key, key) == 0)
		{
			free(current_n->value);
			current_n->value = strdup(value);
			if (current_n->value == 0)
			{
				return (0);
			}
			return (1);
		}
		current_n = current_n->next;
	}
	node_new = malloc(sizeof(hash_node_t));

	if (node_new == NULL)
	{
		return (0);
	}
	node_new->key = strdup(value);
	if (node_new->value == NULL)
	{
		free(node_new->key);
		free(node_new);
		return (0);
	}
	node_new = ht->array[idx];
	ht->array[idx] = node_new;
	return (1);
}
