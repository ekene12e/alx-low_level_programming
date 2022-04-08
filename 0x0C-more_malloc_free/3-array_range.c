#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 *array_range - creates an array of integers
 *@min: minimum int
 *@max: maximm int
 *
 *Return: the created array or NULL if failure
 */
int *array_range(int min, int max)
{
	int *mem;
	int i, len;

	if (min > max)
		return (NULL);

	len = max - min + 1;
	mem = malloc(len * sizeof(min));

	if (mem == NULL)
		return ('\0');

	for (i = 0; i < len && min <= max; i++)
	{
		mem[i] = min;
		min++;
	}
	return (mem);
}
