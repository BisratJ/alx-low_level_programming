#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * linear_skip - Searches for a value in a sorted skip list of integers
 * @list: Pointer to the head of the skip list to search in
 * @value: The value to search for
 * Return: A pointer to the first node where value is located, or NULL
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *express = list, *prev;

	(!list)
	return (NULL);

	while (express)
	{
	printf("Value checked at index [%lu] = [%d]\n", express->index, express->n);
	if (express->n >= value || !express->express)
	{
		if (!express->express && express->n < value)
		{
		prev = express;
		while (express->next)
		express = express->next;
		}
	printf("Value found between indexes [%lu] and [%lu]\n",
	prev->index, express->index);
	while (prev)
	{
	printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
	if (prev->n == value)
	return (prev);
	if (prev->n > value)
	return (NULL);
	prev = prev->next;
	}
	break;
	}
	prev = express;
	express = express->express;
	}

	return (NULL);
}
