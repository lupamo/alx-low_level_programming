#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"
/**
 * colision_list- print list if collision
 * @lst: list to be printed
 * Return: printed hash table
*/
void colision_list(hash_node_t *lst)
{
	lst = lst->next;
	while (lst != NULL)
	{
		printf(", ");
		printf("'%s': '%s'", lst->key, lst->value);
		lst = lst->next;
	}

}
/**
 * hash_table_print- prints a hash table
 * @ht: hash table to print
 * Return: NULL if unsuccessful
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int idx;
	int x = 0;

	if (ht == NULL)
	{
		return;
	}
	printf("{");
	for (idx = 0; idx < ht->size; idx++)
	{
		if (ht->array[idx] != NULL)
		{
			if (x == 1)
			{
				printf(", ");
			}
			printf("'%s': '%s", ht->array[idx]->key, ht->array[idx]->value);
			if (ht->array[idx]->next != NULL)
			{
				colision_list(ht->array[idx]);
			}
			x = 1;
		}
	}
	printf("}\n");
}
