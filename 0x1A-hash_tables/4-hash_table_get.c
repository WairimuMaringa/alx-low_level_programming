#include "hash_tables.h"

/**
 * hash_table_get - retrieve a value associated with a key
 * @ht: hash table
 * @key: key to be looked for
 *
 * Return: value associated with the key, NULL if otherwise
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *tmp_hn;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	idx = key_index((unsigned char *)key, ht->size);
	tmp_hn = ht->array[idx];

	while (tmp_hn != NULL)
	{
		if (strcmp(tmp_hn->key, key) == 0)
			return (tmp_hn->value);
		tmp_hn = tmp_hn->next;
	}

	return (NULL);
}
