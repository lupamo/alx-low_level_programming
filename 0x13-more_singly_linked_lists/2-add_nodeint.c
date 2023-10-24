#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * add_nodeint - adds a node/head at the beginning
 * @head: pointer to the current head
 * @n: node to be added
 * Return: new node pointer
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newPtr;

	newPtr = malloc(sizeof(listint_t));
	if (newPtr == NULL)
	{
		return (NULL);
	}
	newPtr->n = n;
	newPtr->next = *head;
	*head = newPtr;

	return (newPtr);
}
