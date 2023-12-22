#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_create- a function that creates a hash table
 * @size: size ofthe array
 * Return: the table if found
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_t = malloc(sizeof(hash_table_t));

	if (hash_t == NULL)
	{
		return (NULL);
	}	hash_t->array = malloc(sizeof(hash_node_t *) * size);

	if (hash_t->array == NULL)
	{
		free(hash_t);
		return (NULL);
	}

	return (hash_t);
}
