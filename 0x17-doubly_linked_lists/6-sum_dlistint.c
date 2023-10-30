#include "lists.h"

/**
	* sum_dlistint - returns sum of all nodes in dlist
	* @head: head of linked list
	* Description:  returns sum of all nodes in dlist
	* Return: int
*/
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	int sum = 0;

	if (head == NULL)
		return (sum);

	current = head;
	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
