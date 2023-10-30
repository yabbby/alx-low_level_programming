#include "lists.h"

/**
	* delete_dnodeint_at_index - deletes node at index of dlist
	* @head: head of doubly linked list
	* @index: index of node to delete
	* Description: deletes node at index of dlist
	* Return: status code
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	current = *head;
	while (i != index && current != NULL)
	{
		current = current->next;
		i++;
	}
	if (i != index)
		return (-1);

	if (index == 0)
	{
		if (current->next != NULL)
		{
			current->next->prev = NULL;
			*head = current->next;
		}
		else
		{
			*head = NULL;
		}
	}
	else if (current->next == NULL)
	{
		current->prev->next = NULL;
	}
	else
	{
		current->next->prev = current->prev;
		current->prev->next = current->next;
	}

	return (0);
}
