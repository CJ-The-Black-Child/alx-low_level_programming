#ifndef HASH_TABLES_H
#define HASH_TABLES_H

#include <stdlib.h>

/* Data Sstructure for hash table */
/**
 * struct hash_table_s - Daya structure for hash table
 * @size: The size of the array
 * @array: An array of pointers to hash nodes
 *
 * Desc: A data structure for implementing a hash table
 */
typedef struct hash_table_s
{
	unsigned long int size;
	struct hash_node_s **array;
} hash_table_t;

/* Data structure for hash node */
/**
 * struct hash_node_s - Data structure for hash node
 * @key: The key string
 * @value: The value string
 * @next: A pointer to the next hash node with the same hash index.
 *
 * Desc: A data structure for storing key/value pairs in the hash table
 */
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

/* Function to Retrieve the value associated with a key in the hash table */
char *hash_table_get(const hash_table_t *ht, const char *key);

/* Function to print the element of a hash table*/
void hash_table_print(const hash_table_t *ht);

/* Function to Delete a hash table */
void hash_table_delete(hash_table_t *ht);

/* Struct for a sorted hash table node */
/**
 * struct shash_node_s - Data structure for hash node
 * @key: The key string
 * @value: The value string
 * @next: A pointer to the next hash node with the same hash index
 * @sprev: A pointer to the previous sorted hash node
 * @snext: A pointer to the next sorted hash node
 *
 * Desc: A data structure for storing key/value pairs in the hash table
 */
typedef struct shash_node_s
{
	char *key;
	char *value;
	struct shash_node_s *next;
	struct shash_node_s *sprev;
	struct shash_node_s *snext;
} shash_node_t;

/* Struct for a sorted hash table */
/**
 * struct shash_table_s - Data structure for sorted hash table
 * @size: The size of the array
 * @array: An array of pointers to sorted hash nodes
 * @shead: A pointer to the head of the sorted hash table
 * @stail: A pointer to the tail of the sorted hash table
 *
 * Desc: A data structure for implementing a sorted hash table
 */
typedef struct shash_table_s
{
	unsigned long int size;
	shash_node_t **array;
	shash_node_t *shead;
	shash_node_t *stail;
} shash_table_t;

/* Function to create a sorted hash table */
shash_table_t *shash_table_create(unsigned long int size);

/* Function to add or update a key/value pair in the sorted hash table */
int shash_table_set(shash_table_t *ht, const char *key, const char *value);

/*
 * Function to retrieve the value associated with a key
 * in the sorted hash table
 */
char *shash_table_get(const shash_table_t *ht, const char *key);

/* Function to print the elements of a sorted hash table */
void shash_table_print(const shash_table_t *ht);

/* Function to print the element of a sorted hash table in reverse order */
void shash_table_print_rev(const shash_table_t *ht);

/* Function to delete a sorted hash table */
void shash_table_delete(shash_table_t *ht);

#endif /* HASH_TABLES_H*/
