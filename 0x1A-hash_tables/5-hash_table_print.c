#include "hash_tables.h"
#include <stdio.h>

/**
	* hash_table_print - prints a hash table
	* @ht: hash table to print
	* Description: prints a hash table
	* Return: void
*/
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t **arr;
	unsigned long int i;
	hash_node_t *tmp;
	int first = 0;

	if (ht == NULL)
		return;

	arr = ht->array;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (arr[i] == NULL)
			continue;
		tmp = arr[i];
		while (tmp != NULL)
		{
			if (first != 0)
				printf(", ");
			printf("'%s': '%s'", tmp->key, tmp->value);
			first = 1;
			tmp = tmp->next;
		}
	}
	printf("}\n");
}
