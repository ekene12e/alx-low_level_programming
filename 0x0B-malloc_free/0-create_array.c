#include "main.h"
#include <stdlib.h>
/**
 *create_array - creates an array
 *@size: size of array
 *@c: the array
 *Return: a new array or null
 */
char *create_array(unsigned int size, char c)
{
	if ((c || '\0') && size > 0)
	{
	char *arr = malloc(size);
	unsigned int i;

	for (i = 0; i < size; i++)
	{
	arr[i] = c;
	}
	arr[size] = '\0';
	return (arr);
	}
	return ('\0');
}
