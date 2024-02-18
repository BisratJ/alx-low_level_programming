#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * print_subarray - Prints the elements of an array between two indices
 * @array: The array to print
 * @low: The lower bound of the subarray
 * @high: The upper bound of the subarray
 */
void print_subarray(int *array, size_t low, size_t high)
{
	printf("Searching in array: ");
	for (size_t i = low; i <= high; ++i)
	{
	printf("%d", array[i]);
	if (i < high)
	printf(", ");
	}
	printf("\n");
}

/**
 * binary_search - Searches for a value in a sorted array using binary search
 * @array: Pointer to the first element of the array
 * @low: Lower bound of the search range
 * @high: Upper bound of the search range
 * @value: Value to search for
 * Return: Index where value is located, or -1 if not found
 */
int binary_search(int *array, size_t low, size_t high, int value)
{
	while (low <= high)
	{
	size_t mid = (low + high) / 2;

	printf("Searching in array: ");
	print_subarray(array, low, high);

	if (array[mid] == value)
	return (mid);

	else if (array[mid] < value)
	low = mid + 1;
	else
	high = mid - 1;
	}

	return (-1);
}

/**
 * exponential_search - Searches for a value in a sorted array using the
 * Exponential search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 * Return: Index where value is located, or -1 if not found
 */
int exponential_search(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
	return (-1);

	size_t bound = 1;

	while (bound < size && array[bound] < value)

	{
	printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
	bound *= 2;
	}

	size_t left = bound / 2;
	size_t right = (bound < size - 1) ? bound : size - 1;

	printf("Value found between indexes [%lu] and [%lu]\n", left, right);

	return (binary_search(array, left, right, value));
}
