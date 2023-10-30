#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
	* insert_dnodeint_at_index - inserts a new node at given index
	* @h: head of doubly linked list
	* @idx: index to add new node at
	* @n: value of new node
	* Description: inserts a new node at given index
	* Return: dlistint_t
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new;
	unsigned int i = 0;
	dlistint_t *current;

	if (*h == NULL || idx == 0)
	{
		return (add_dnodeint(h, n));
	}

	current = *h;
	while (i < idx - 1 && current != NULL)
	{
		current = current->next;
		i++;
	}
	if (i != idx - 1)
	{
		return (NULL);
	}
	if (current->next == NULL)
		return (add_dnodeint_end(h, n));

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	new->next = current->next;
	new->prev = current;
	current->next->prev = new;
	current->next = new;

	return (new);
}
