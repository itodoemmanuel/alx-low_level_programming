#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * hash_table_create - function to create a hash table
 *
 * @size: size of hash table to create
 *
 * Return: the hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	hash_node_t **array;

	if (size == 0)
		return (NULL);
	array = malloc(size * sizeof(hash_node_t));
	if (array == NULL)
		return (NULL);
	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);
	table->size = size;
	table->array = array;
	return (table);
}
