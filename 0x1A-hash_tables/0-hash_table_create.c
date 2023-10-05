#include "hash_tables.h"

/**
 * hash_table_create - creat a hash table .
 * @size : size of array.
 *
 * Return: a pointer of the new hash table.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *h_t_create = NULL;

	h_t_create = malloc(sizeof(hash_table_t));
	if (h_t_create == NULL)
		return (NULL);
	h_t_create->size = size;
	h_t_create->array = calloc(size, sizeof(hash_node_t *));
	if (h_t_create->array == NULL)
		return (NULL);
	return (h_t_create);
}
