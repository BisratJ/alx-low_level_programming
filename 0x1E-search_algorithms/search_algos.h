#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stddef.h> /* For size_t */
#include "listint.h"


/* Function prototypes */
listint_t *jump_list(listint_t *list, size_t size, int value);
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int **allocate_map(int n, int m);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
void print_subarray(int *array, size_t low, size_t high);
int advanced_binary(int *array, size_t size, int value);
int binary_search_recursive(int *array, size_t start, size_t end, int value);


#endif /* SEARCH_ALGOS_H */
