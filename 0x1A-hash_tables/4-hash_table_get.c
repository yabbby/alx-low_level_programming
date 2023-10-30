#include "hash_tables.h"
#include <string.h>

/**
	* hash_table_get - retrieves a value associated with key
	* @ht: hash table
	* @key: key of element wanted
	* Description: retrieves a value associated with key
	* Return: char
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *tmp;
	unsigned long int index;

	if (ht == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);

	if (ht->array[index] == NULL)
		return (NULL);

	tmp = ht->array[index];
	while (tmp != NULL && strcmp(tmp->key, key) != 0)
		tmp = tmp->next;

	if (tmp == NULL)
		return (NULL);

	return (tmp->value);
}
