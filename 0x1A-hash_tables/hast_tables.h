#ifndef HASH_TABLES_H
#define HAS_TABLES_H

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

#endif /* HASH_TABLES_H*/
