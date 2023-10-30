#include "lists.h"

/**
	* get_dnodeint_at_index - get the nth node of dlist
	* @head: head of doubly linked list
	* @index: index of node to get
	* Description: get the nth node of dlist
	* Return: dlistint_t
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	current = head;
	while (i < index && current != NULL)
	{
		current = current->next;
		i++;
	}

	if (i != index)
		return (NULL);

	return (current);
}
