#include <stdlib.h>
#include "main.h"
/**
 *_strdup - returns a pointer to strings supplied
 *@str: supplied string
 *Return: string
 */
char *_strdup(char *str)
{
	if (str == NULL)
		return ('\0');

	char *p;
	int i:

	p = malloc(sizeof(str));
	
	for (i = 0; i <= (sizeof(p)); i++)
		p[i] = str[i];
		return (p);
}
