#include "search_algos.h"

/**
 * print_array - prints an array between two indices
 * @array: Pointer to the first element of the array
 * @low: lower index bound
 * @high: upper index bound
 */
void print_array(int *array, size_t low, size_t high)
{
	size_t i;

	printf("Searching in array: ");
	for (i = low; i <= high; i++)
	{
		printf("%d", array[i]);
		if (i < high)
			printf(", ");
	}
	printf("\n");
}

/**
 * advanced_binary_recursive - Recursively searches for a value
 * @array: Pointer to the first element of the array
 * @low: lower bound
 * @high: upper index bound
 * @value: value to search for
 *
 * Return: the index where the value is located
 */
int advanced_binary_recursive(int *array, size_t low, size_t high, int value)
{
	size_t mid;

	if (low <= high)
	{
		mid = (low + high) / 2;

		print_array(array, low, high);

		if (array[mid] == value && (mid == low || array[mid - 1] != value))
			return (mid);
		else if (array[mid] < value)
			return (advanced_binary_recursive(array, mid + 1, high, value));
		else
			return (advanced_binary_recursive(array, low, high, value));
	}
	return (-1);
}

/**
 * advanced_binary - searches for a value in a sorted array
 * @array: pointer to the first element of the array
 * @size: Number of elements in the array
 * @value: value to search for
 *
 * Return: the index where value is located
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (advanced_binary_recursive(array, 0, size - 1, value));
}
