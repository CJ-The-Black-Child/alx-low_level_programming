#ifndef HASH_TABLES2_H
#define HASH_TABLES2_H

#include <stdlib.h>

/**
 * struct shash_node_s - Node of a sorted hash table
 * @key: The key (string)
 * @value: The value associated with the key
 * @next: A pointer to the next node
 * @sprev: A pointer to the previous node in the sorted order
 * @snext: A pointer to the next node in the sorted order.
 *
 * Desc: A node of a sorted hash table using a linked list
 */
typedef struct shash_node_s
{
	char *key;
	char *value;
	struct shash_node_s *next;
	struct shash_node_s *sprev;
	struct shash_node_s *snext;
} shash_node_t;

/**
 * struct shash_table_s - Sorted hash table data structure
 * @size: The size of the array
 * @array: An array of pointers to nodes
 * @shead: A pointer to the head of the sorted linked list
 * @stail: A pointer to the tail of the sorted linked list
 *
 * Des: Sorted hash table using an array and sorted linked list.
 */
typedef struct shash_table_s
{
	unsigned long int size;
	shash_node_t **array;
	shash_node_t *shead;
	shash_node_t *stail;
} shash_table_t;
/* function prototypes */
shash_table_t *shash_table_create(unsigned long int size);
int shash_table_set(shash_table_t *ht, const char *key, const char *value);
char *shash_table_get(const shash_table_t *ht, const char *key);
void shash_table_print(const shash_table_t *ht);
void shash_table_print_rev(const shash_table_t *ht);
void shash_table_delete(shash_table_t *ht);

#endif /* HASH_TABLES2_H*/
