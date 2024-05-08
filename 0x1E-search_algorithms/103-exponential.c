#include "search_algos.h"
  
/**
 * binary_searching - searches for a value in a sorted array using binary
 * @array: pointer to the first element of the array
 * @low: lower index bound
 * @high: Upper index bound
 * @value: value to search for
 *
 * Return: the index where the value is located
 */
int binary_searching(int *array, size_t low, size_t high, int value)
{
        size_t mid, i;

        while (low <= high)
        {
                mid = (low + high) / 2;

                printf("Searching in array: ");
                for (i = low; i <= high; i++)
                {
                        printf("%d", array[i]);
                        if (i < high)
                                printf(", ");
                }
                printf("\n");

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
 * exponential_search - searches for a value in a sorted array
 * @array: pointer to first element of the array
 * @size: Number of elements in array
 * @value: value to search for
 *
 * Return: The index where value is located
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound, low, high;

	if (array == NULL || size == 0)
		return (-1);

	bound = 1;
	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}

	low = bound / 2;
	high = (bound < size - 1) ? bound : size - 1;

	printf("Value found between indexes [%lu] and [%lu]\n", low, high);
	return binary_searching(array, low, high, value);
}
