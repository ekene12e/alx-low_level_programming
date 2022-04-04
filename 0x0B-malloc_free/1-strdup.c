#include <stdlib.h>
#include "main.h"
/**
 *_strdup - returns a pointer to strings supplied
 *@str: supplied string
 *Return: string
 */
char *_strdup(char *str)
{
	char *p;
        long unsigned int i;

	if (str == NULL)
		return ('\0');

	p = malloc(sizeof(str));
	
	for (i = 0; i <= (sizeof(p)); i++)
	{
		p[i] = str[i];
	}
	return (p);
}
