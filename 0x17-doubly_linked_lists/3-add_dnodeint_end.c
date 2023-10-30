#include "lists.h"
#include <stdlib.h>

/**
	* add_dnodeint_end - adds a new node at end of dlist
	* @head: head of dlist
	* @n: value of node
	* Description: adds a new node at end of dlist
	* Return: dlistint_t
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *current;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	current = *head;
	while (current->next != NULL)
		current = current->next;

	new->prev = current;
	current->next = new;

	return (new);
}
