#include "lists.h"

/**
	* free_dlistint - frees a doubly linked list
	* @head: head of doubly linked list
	* Description: frees a doubly linked list
	* Return: void
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	dlistint_t *tmp;

	if (head == NULL)
		return;

	current = head;
	while (current != NULL)
	{
		tmp = current;
		current = current->next;
		free(tmp);
	}
}
