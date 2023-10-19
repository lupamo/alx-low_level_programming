#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_list - frees list_t list
 * @head: pointer to first node
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *present, *next;

	present = head;

	while (present != NULL)
	{
		next = present->next;
		free(present->str);
		free(present);
		present = next;
	}
}
