#include "hash_tables.h"
shash_table_t *shash_table_create(unsigned long int size)
{
        shash_table_t *newTable;
        unsigned int i;

        if (size > 0)
        {
                newTable = malloc(sizeof(shash_table_t));
                if (!newTable)
			return (NULL);
		newTable->size = size;
		newTable->array = malloc(sizeof(shash_node_t *) * size);
		newTable->shead = NULL;
		newTable->stail = NULL;
                if (!newTable->array)
                {
                        free(newTable);
                        return (NULL);
                }
                for (i = 0; i < size; i++)
                        newTable->array[i] = NULL;
                return (newTable);
        }
        return (NULL);
}
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
        unsigned long int position;
        shash_node_t *checker, *new, *sorter;

        if (!ht || ht->size == 0 || strlen(key) == 0)
                return (0);
	position = key_index((const unsigned char *)key, ht->size);
        checker = ht->array[position];
        while (checker)
        {
                if (!strcmp(checker->key, key))
                {
                        free(checker->value);
                        checker->value = strdup((char *)value);
                        if(!checker->value)
                                return(0);
                        return (1);
                }
                checker = checker->next;
        }
        new = malloc(sizeof(shash_node_t));
        if (!new)
                return (0);
        new->key = strdup((char *)key);
        if(!new->key)
        {
                free(new);
                return(0);
        }
        new->value = strdup((char *)value);
        if(!new->value)
        {
                free(new->value);
                free(new);
                return (0);
        }
        new->next = ht->array[position];
        ht->array[position] = new;
	new->snext = NULL;
	new->sprev = NULL;
	if(!ht->shead)
	{
		ht->shead = new;
		ht->stail = new;
		return(1);
	}
	if(strcmp(new->key, ht->shead->key) < 0)
	{
		ht->shead->sprev = new;
		new->snext = ht->shead;
		ht->shead = new;
		return(1);
	}
	else
	{
		sorter = ht->shead->snext;
		while(sorter && strcmp(new->key,sorter->key) > 0)
			sorter = sorter->snext;
		if(!sorter)
		{
			new->sprev = ht->stail;
			ht->stail->snext = new;
			ht->stail = new;
			return(1);
		}
		new->sprev = sorter->sprev;
		sorter->sprev->snext = new;
		sorter->sprev = new;
		new->snext = sorter;
	}
        return (1);
}
char *shash_table_get(const shash_table_t *ht, const char *key)
{
        unsigned long int position;
        shash_node_t *checker;

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
void shash_table_print(const shash_table_t *ht)
{
	if(!ht)
		return;
	shash_node_t *header = ht->shead;

	printf("{");
	while(header)
	{
		printf("'%s': '%s'",header->key,header->value);
		if(header != ht->stail)
			printf(", ");
		header = header->snext;
	}
	printf("}\n");
}
void shash_table_print_rev(const shash_table_t *ht)
{
	if(!ht)
		return;
	shash_node_t *tailer = ht->stail;

	printf("{");
	while(tailer)
	{
		printf("'%s': '%s'",tailer->key,tailer->value);
		if(tailer != ht->shead)
			printf(", ");
		tailer = tailer->sprev;
	}
	printf("}\n");
}
void shash_table_delete(shash_table_t *ht)
{
	if (!ht)
		return;
	//shash_node_t *freer, *tmp;

	exit(1);
}
