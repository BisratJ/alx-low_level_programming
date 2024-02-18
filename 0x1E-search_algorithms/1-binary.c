#include "search_algos.h"
#include <stdio.h>
#include <unistd.h>

/**
 * binary_search - Searches for a value in a sorted array using Binary search
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 * Return: Index where value is located, or -1 if not present or array is NULL
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left, right, mid, i;

	if (array == NULL)
	return (-1);

	left = 0;
	right = size - 1;

	while (left <= right)
	{
	/* Print the current subarray being searched */
	printf("Searching in array: ");
	for (i = left; i <= right; i++)
	{
	if (i < right)
	printf("%d, ", array[i]);
	else
	printf("%d\n", array[i]);
	}

	mid = (left + right) / 2;

	if (array[mid] == value)
	return (mid);

	if (array[mid] < value)
	left = mid + 1;
	else
	right = mid - 1;
	}

	return (-1);
}
