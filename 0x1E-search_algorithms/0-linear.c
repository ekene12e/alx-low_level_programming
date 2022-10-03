#include "search_algos.h"
/**
 *linear_search-implements linear search algo
 *@array: array to be sorted
 *@size: size of array
 *@value: value to be sorted
 *Return: index of the occurence
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (*(array + i) == value)
		{
			return (i);
		}
	}
	return (-1);
}
