#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 *_realloc - mimics the realloc function
 *@ptr: original memory
 *@old_size: old memory size
 *@new_size: new memory size
 *
 *Return: New memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	int *mem;
	unsigned int i;
	int *temp = ptr;

	mem = malloc(new_size);
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
		return (malloc(new_size));
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	for (i = 0; i < old_size && i < new_size; i++)
	{
		mem[i] = temp[i];
	}
	free(ptr);
	return (mem);
}
