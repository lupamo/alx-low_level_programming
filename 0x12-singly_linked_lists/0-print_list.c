#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - prints the list of nodes
 * @h: input pointing to the list
 *
 * Return: number of nodes in the list
 */
size_t print_list(const list_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%lu] %s\n", h->len, h->str);

		h = h->next;
		num++;
	}
	return (num);
}
