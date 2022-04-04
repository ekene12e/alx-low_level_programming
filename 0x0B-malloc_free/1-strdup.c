#include <stdlib.h>
#include "main.h"
/**
 *_strdup - returns a pointer to strings supplied
 *@str: supplied string
 *Return: string
 */
char *_strdup(char *str)
{
	char *mem
        unsigned int str_len = 0;
	int i;

	if (str == NULL)
		return ('\0');
	while (str[str_len] != '\0')
	{
	 str_len++;
	}

	mem = malloc(str_len * (sizeof(*str)));
	
	for (i = 0; i <= str_len; i++)
	{
		mem[i] = str[i];
	}
	mem[str_len] = '\0';
	return (p);
}
