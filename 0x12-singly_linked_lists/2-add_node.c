#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node - adds a node at the beggining of list
 * @head: is a pointer to a pointer of first node
 * @str: string to be added to list
 * Return: address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_Ptr;

	if (str == NULL)
	{
		return (NULL);
	}
	new_Ptr = malloc(sizeof(list_t));

	if (new_Ptr == NULL)
	{
		return (NULL);
	}
	new_Ptr->str = malloc(strlen(str) + 1);

	if (new_Ptr->str == NULL)
	{
		free(new_Ptr);
		return (NULL);
	}
	strcpy(new_Ptr->str, str);
	new_Ptr->len = strlen(str);
	new_Ptr->next = *head;
	*head = new_Ptr;

	return (new_Ptr);
}
