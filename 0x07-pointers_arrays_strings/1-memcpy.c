#include "main.h"
/**
*_memcpy - copies a memory area
*@dest: destination
*@src: memory to be copied
*@n: number of time
*Return: dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

