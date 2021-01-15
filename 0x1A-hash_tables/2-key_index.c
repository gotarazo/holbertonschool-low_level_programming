#include "hash_tables.h"

/**
* key_index- Gives you the index of a key
* @key: String with the key
* @size: Size of the array of the hash table
* Return: index of given key in hash_table
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
return (hash_djb2(key) % size);
}
