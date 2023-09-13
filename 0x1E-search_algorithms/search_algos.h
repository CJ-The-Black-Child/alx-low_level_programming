#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

/* Usable std libraries */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Sttuct for singly linked list*/
typedef struct listint_s
{
	int n;
	size_t index;
	struct listint_s *next;
} listint_t;
/* Function prototypes */
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);
listint_t *jump_list(listint_t *list, size_t size, int value);
listint_t *create_list(int *array, size_t size);
void print_list(const listint_t *list);
void free_list(listint_t *list);
void free_list(listint_t *list);


#endif /* SEARCH_ALGOS_H */
