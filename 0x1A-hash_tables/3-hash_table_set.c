#include "hash_tables.h"
#include "string.h"

/**
	* key_exists - checks if key already exists in hash table
	* @table: hash table
	* @key: key to check
	* Description: checks if key already exists in hash table
	* Return: int
*/
int key_exists(hash_table_t *table, const char *key)
{
	hash_node_t *tmp;

	tmp = table->array[key_index((const unsigned char *)key, table->size)];

	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
			return (1);
		tmp = tmp->next;
	}

	return (0);
}

/**
	* update_hash_table - updates a key in hash table
	* @ht: hash table
	* @key: key of element to update
	* @value: new value of element to update
	* Description: updates a key in hash table
	* Return: void
*/
void update_hash_table(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *tmp;

	tmp = ht->array[key_index((const unsigned char *)key, ht->size)];
	while (strcmp(tmp->key, key) != 0)
	{
		tmp = tmp->next;
	}
	tmp->value = strdup(value);

}

/**
	* hash_table_set - adds an element to hash_table
	* @ht: hash table
	* @key: key of element to be added
	* @value: value to element to be added
	* Description: adds an element to hash_table
	* Return: int
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new;

	if (ht == NULL)
		return (0);

	if (key != NULL || value != NULL)
	{
		index = key_index((unsigned char *)key, ht->size);
		new = malloc(sizeof(hash_node_t));
		if (new == NULL)
			return (0);

		new->key = strdup(key);
		new->value = strdup(value);

		if (key_exists(ht, key) == 1)
		{
			update_hash_table(ht, key, value);
			free(new->key);
			free(new->value);
			free(new);
			return (1);
		}

		if (ht->array[index] == NULL)
		{
			ht->array[index] = new;
		}
		else
		{
			new->next = ht->array[index];
			ht->array[index] = new;
		}

		return (1);
	}

	return (0);
}
