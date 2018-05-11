#include "hash_tables.h"
/**
 * hash_table_print - prints hash table
 * @ht: hash table to print
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int i = 0;
	unsigned int lastKey = ht->size;
	hash_node_t *printer;

	if(!ht)
		return;
	while (!ht->array[--lastKey] && lastKey > 0);

	printf("{");
	for (i = 0; i <= lastKey; i++)
	{
		printer = ht->array[i];
		if (!printer)
			continue;
		while (printer)
		{
			printf("'%s': '%s'", printer->key, printer->value);
			if (printer->next || i < lastKey)
				printf(", ");
			printer = printer->next;
		}
	}
	printf("}\n");
}
