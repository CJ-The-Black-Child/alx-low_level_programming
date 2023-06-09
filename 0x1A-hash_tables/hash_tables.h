#ifndef HASH_TABLES_H
#define HASH_TABLES_H

#include <stdlib.h>

/* Data Sstructure for hash table */
typedef struct has_tables_s
{
	unsigned long int size;
	struct hash_node_s **array;
} hash_table_t;

/* Data structure for hash node */
typedef struct hash_node_s
{
	char *key;
	char *value;
	struct hash_node_s *next;
} hash_node_t;

/* Function to create a hash table */
hash_table_t *hash_table_create(unsigned long int size);

/* Fucntion to calculate the hash value using djb2 algorithm */
unsigned long int hash_djb2(const unsigned char *str);

/* Function to get the index of a key in the hash table */
unsigned long int key_index(const unsigned char *key, unsigned long int size);

/* Function to Add or update a key/value pait in the hash table */
int hash_table_set(hash_table_t *ht, const char *key, const char *value);

#endif /* HASH_TABLES_H*/
