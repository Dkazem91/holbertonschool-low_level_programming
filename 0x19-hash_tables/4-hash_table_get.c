#include "hash_tables.h"
/**
 * hash_table_get - gets value associated with key
 * @ht: hash table to go through
 * @key: key to get
 * Return: returns string value
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int position;
	hash_node_t *checker;

	if (!ht || ht->size == 0 || strlen(key) == 0)
		return (NULL);
	position = key_index((const unsigned char *)key, ht->size);
	checker = ht->array[position];
	while (checker)
	{
		if (!strcmp(checker->key, key))
			return (checker->value);
		checker = checker->next;
	}
	return (NULL);
}
