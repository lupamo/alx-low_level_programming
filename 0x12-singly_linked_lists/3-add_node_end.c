#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>
/**
 * add_node_end - adds node at the end of list
 * @head: pointer to pointer of first node
 * @str: element to be added at the end
 * Return: returns address of str
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node_ptr, *tmp;

	if (str == NULL)
	{
		return (NULL);
	}
	node_ptr = malloc(sizeof(list_t));

	if (node_ptr == NULL)
	{
		return (NULL);
	}
	node_ptr->str = strdup(str);

	if (node_ptr->str == NULL)
	{
		free(node_ptr);
		return (NULL);
	}
	node_ptr->len = strlen(str);
	node_ptr->next = NULL;

	if (*head == NULL)
	{
		*head = node_ptr;
	}
	else
	{
		tmp = *head;
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = node_ptr;
	}
	return (node_ptr);
}
