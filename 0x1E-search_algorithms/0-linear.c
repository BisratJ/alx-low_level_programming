#include "search_algos.h"
#include <stdio.h>

/**
 * linear_search - Searches for a value in an array using Linear search
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array
 * @value: Value to search for
 * Return: Index of the first occurrence of the value, or -1 if not found
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;  /* Declare the variable at the beginning of the block */

	if (array == NULL)
	return (-1);

	for (i = 0; i < size; i++)
	{
	printf("Value checked array[%lu] = [%d]\n", i, array[i]);
	if (array[i] == value)
	return (i);
	}

	return (-1); /* Value not found */
}
