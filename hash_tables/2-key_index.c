#include "hash_tables.h"
/**
 *key_index - gives the index of the key
 *@key: the key in the hash table
 *@size: the size of that hash table
 *Return: the index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
