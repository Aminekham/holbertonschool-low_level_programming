#include "hash_tables.h"
/**
 * 
 * 
 * 
 * 
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new = NULL;
	size_t i;

	new = malloc(sizeof(hash_table_t));
	new->array = malloc(sizeof(hash_node_t *) * size);
	for (i = 0; i < size; i++)
	{
		new->array[i] = NULL;
	}
	new->size = size;
	return (new);
}
