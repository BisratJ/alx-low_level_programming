#include <stdio.h>
#include "search_algos.h"

/**
 * advanced_binary - Searches for a value in a sorted array of integers.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 * Return: Index where value is located, or -1 if not found.
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
	return (-1);

	return (binary_search_recursive(array, 0, size - 1, value));
}

/**
 * binary_search_recursive - Recursively searches for a value in
 * a sorted array.
 * @array: Pointer to the first element of the array to search in.
 * @start: Index of the first element in the subarray.
 * @end: Index of the last element in the subarray.
 * @value: Value to search for.
 * Return: Index where value is located, or -1 if not found.
 */
int binary_search_recursive(int *array, size_t start, size_t end, int value)
{
	size_t mid;

	if (start > end)
	return (-1);

	printf("Searching in array: ");
	print_subarray(array, start, end);

	mid = (start + end) / 2;
	if (array[mid] == value)
	{
	if (mid == start || array[mid - 1] != value)
	return (mid);
	return (binary_search_recursive(array, start, mid, value));
	}
	else if (array[mid] < value)
	return (binary_search_recursive(array, mid + 1, end, value));
	else
	return (binary_search_recursive(array, start, mid - 1, value));
}

/**
 * print_subarray - Prints the elements of an array between two indices.
 * @array: The array to print.
 * @low: The lower bound of the subarray.
 * @high: The upper bound of the subarray.
 */
void print_subarray(int *array, size_t low, size_t high)
{
	for (size_t i = low; i <= high; ++i)
	{
	printf("%d", array[i]);
	if (i < high)
	printf(", ");
	}
	printf("\n");
}
