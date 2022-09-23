#include "hash_tables.h"

/**
 * hash_table_print - print a hash table
 * @ht: hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, sep = 0;
	hash_node_t *tmp_hn;

	if (ht == NULL)
		return;

	printf("{");

	for (i = 0; i < ht->size; i++)
	{
		tmp_hn = ht->array[i];
		while (tmp_hn != NULL)
		{
			if (sep)
				printf(", ");
			printf("'%s': '%s'", tmp_hn->key, tmp_hn->value);
			tmp_hn = tmp_hn->next;
			sep = 1;
		}
	}

	printf("}\n");
}
