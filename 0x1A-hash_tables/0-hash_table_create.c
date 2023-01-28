#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 *
 * Return: pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *hash_table;
unsigned long int i;
<<<<<<< HEAD
=======

>>>>>>> 904f7457a8028d90786149db58a07a0576701a88
hash_table = malloc(sizeof(hash_table_t));
if (hash_table == NULL)
return (NULL);
hash_table->size = size;
hash_table->array = malloc(size * sizeof(hash_node_t *));
if (hash_table->array == NULL)
{
free(hash_table);
return (NULL);
<<<<<<< HEAD
}
for (i = 0; i < size; i++)
hash_table->array[i] = NULL;
return (hash_table);
=======
>>>>>>> 904f7457a8028d90786149db58a07a0576701a88
}
for (i = 0; i < size; i++)
hash_table->array[i] = NULL;
return (hash_table);
}