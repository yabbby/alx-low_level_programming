#include "lists.h"
#include <stdlib.h>

/**
	* add_dnodeint - adds a new node at the beginning of dlist
	* @head: head of linked list
	* @n: value of node
	* Description: adds a new node at the beginning of dlist
	* Return: the newly created node
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		new->next = *head;
		(*head)->prev = new;
		*head = new;
	}

	return (new);
}
