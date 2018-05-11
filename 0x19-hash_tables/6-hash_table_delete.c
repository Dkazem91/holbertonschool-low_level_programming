#include "hash_tables.h"
/**
 * hash_table_delete - deletes and frees hash table
 * @ht: hash table to beat
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned int i;
	hash_node_t *freer, *tmp;

	for (i = 0; i < ht->size; i++)
	{
		freer = ht->array[i];
		while (freer)
		{
			tmp = freer->next;
			free(freer->key);
			free(freer->value);
			free(freer);
			freer = tmp;
		}
	}
	free(ht->array);
	free(ht);

}
