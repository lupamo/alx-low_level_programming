#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"
/**
 * hash_table_delete- deletes a hash table
 * @ht: table to delete
 * Return: nothing
*/
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *h;
	hash_node_t *n;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			h = ht->array[i];
			while (h != NULL)
			{
				n = h->next;
				if (h->value != NULL)
				{
					free(h->value);
				}
				if (h->key != NULL)
				{
					free(h->key);
				}
				free(h);
				h = n;
			}

		}
	}
	free(ht->array);
	free(ht);
}
