#include <stdlib.h>
#include <stdio.h>
#include "hash_tables.h"

/**
  * key_index -it computes the index of a given key in a hash table.
  * @key: The given key.
  * @size:it is the size of the hash table.
  *
  * Return:it will return the index of a key in a hash table.
  */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
