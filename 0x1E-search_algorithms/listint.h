#ifndef LISTINT_H
#define LISTINT_H

#include <stddef.h>

/**
 * struct listint_s - singly linked list
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 * Description: singly linked list node structure
 */
typedef struct listint_s
{
	int n;
	size_t index;
	struct listint_s *next;
}	listint_t;

/*Function Prototype*/
listint_t *create_list(int *array, size_t size);
void print_list(const listint_t *list);
void free_list(listint_t *list);

#endif /* LISTINT_H */
