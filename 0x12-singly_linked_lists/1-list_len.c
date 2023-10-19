#include <stdio.h>
#include "lists.h"

/**
 * list_len - takes a linked list
 * @h: pointer to a linked list
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	int counter = 0;

	while (h != NULL)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
