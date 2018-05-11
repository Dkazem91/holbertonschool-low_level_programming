#include "hash_tables.h"
/**
 * hash_table_print - prints hash table
 * @ht: hash table to print
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int i = 0;
	unsigned int lastKey = ht->size - 1;
	hash_node_t *printer;

	if (ht == NULL)
		return;

	while (!ht->array[lastKey] && lastKey != 0)
		lastKey--;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		printer = ht->array[i];
		if (!printer)
			continue;
		while (printer)
		{
			printf("'%s': '%s'", printer->key, printer->value);
			if (i != lastKey)
				printf(", ");
			printer = printer->next;
		}
	}
	printf("}\n");
}
