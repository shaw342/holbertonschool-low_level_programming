#include "hash_tables.h"
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table = malloc(sizeof(hash_table_t));
	unsigned long int i;

	if (hast_table)
	{
		return (NULL);
	}
	hast_table->size = size;

	hash_table->array = malloc(size * sizeof(hash_node_t));

	if (!hash_table->array)
	{
		free(hash_table);
		return (NULL);
	}

	return (hash_table);


}
