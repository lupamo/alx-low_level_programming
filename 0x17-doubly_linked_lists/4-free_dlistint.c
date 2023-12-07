#include "lists.h"
/**
 * free_dlistint - frees our list
 * @head: head node
 * Return: freed list
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *top = head;
	while (top)
	{
		dlistint_t *next = top->next;
		free(top);
		top = next;
	}
	head = NULL;
	
}