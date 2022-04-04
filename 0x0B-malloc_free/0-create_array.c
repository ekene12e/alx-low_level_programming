#include "main.h"
#include <stdlib.h>
/**
 *create_array - creates an array
 *@size: size of array
 *@c: the array
 */
char *create_array(unsigned int size, char c)
{
	if (c && size > 0)
	{
	char *arr = (char) *malloc(size)
	arr[0] = c;
	return (arr);
	}
	return (NULL);
}
