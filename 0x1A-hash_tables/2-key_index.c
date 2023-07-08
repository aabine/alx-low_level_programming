#include "hash_tables.h"

/**
 * key_index - implementation of the djb2 algorithm for the key index
 * @key: string used to generate hash value
 * @size: size of the array to be used for the hash table
 * 
 * Return: hash value the key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
