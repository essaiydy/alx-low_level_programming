#include "hash_tables.h"

/**
 * key_index - cherche the key index whereyou need to store.
 * @size:  is the size of the array of the hash table.
 * @key: is the key and the str in the djb2 fonction.
 *
 * Return: the index.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
