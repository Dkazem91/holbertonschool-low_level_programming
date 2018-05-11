#include "hash_tables.h"
unsigned long int alpha_key(unsigned char *str, unsigned long int size)
{
	unsigned long int hash = 599;
	int i = 0, sum = 0;

	while(str[i])
		sum += str[i++];
	return (sum % hash);
}
shash_table_t *shash_table_create(unsigned long int size)
{
        shash_table_t *newTable;
        unsigned int i;

        if (size > 0)
        {
                newTable = malloc(sizeof(hash_table_t));
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
        new = malloc(sizeof(hash_node_t));
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
	if(!ht->head)
	{
		ht->shead = new;
		ht->stail = new;
		return(1);
	}
	if(strcmp(new->key, ht->head->key))
	{
		ht->shead->sprev = new;
		new->snext = ht->head;
		ht->shead = new;
		return(1);
	}
	else
	{
		sorter = ht->head->next;
		while(strcmp(new->key,sorter->key) < 0 && sorter)
			sorter = sorter->next;
		if(!sorter)
		{
			new->sprev = ht->tail;
			ht->tail->next = new;
			ht->tail = new;
			return(1);
		}
		new->sprev = sorter->sprev;
		sorter->sprev->next = new;
		sorter->sprev = new;
		new->next = sorter;
	}
        return (1);
}
char *shash_table_get(const shash_table_t *ht, const char *key)
{
}
void shash_table_print(const shash_table_t *ht)
{
}
