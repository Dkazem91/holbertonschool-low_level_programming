#include "hash_tables.h"
/**
 * hash_table_set - adds element to hash table
 * @ht: hash table to add or update
 * @key: key to add
 * @value: value to associate with key
 * Return: 1 or 0 if succeed or fail
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int position;
	hash_node_t *checker, *new;

	if (!ht || !ht->size || !strlen(key))
		return (0);
	position = key_index((const unsigned char *)key, ht->size);
	checker = ht->array[position];
	while (checker)
	{
		if (!strcmp(checker->key, key))
		{
			free(checker->value);
			checker->value = strdup((char *)value);
			if (!checker->value)
				return (0);
			return (1);
		}
		checker = checker->next;
	}
	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (0);
	new->key = strdup((char *)key);
	if (!new->key)
	{
		free(new);
		exit(0);
	}
	new->value = strdup((char *)value);
	if (!new->value)
	{
		free(new->value);
		free(new);
		return (0);
	}
	new->next = ht->array[position];
	ht->array[position] = new;
	return (1);
}
