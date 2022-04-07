#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 *string_nconcat - returns a concateneated n bytes
 *of string from s2 onto s1
 *@s1: first string
 *@s2: second string
 *@n: bytes of strings from s2
 *Return: New string or NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *mem;
	unsigned int i = 0;
	unsigned int j, k;

	while (s1[i] != '\0')
	{
		i++;
	}
	i = i + 2;
	mem = malloc((i * sizeof(*s1)) + n);
	if (mem == NULL)
		return (NULL);

	for (j = 0; j < (i - 2); j++)
			{
				mem[j] = s1[j];
			}
	for (k = 0; k < n; k++)
	{
		mem[j] = s2[k]
			j++
	}
	mem[i - 2 + n ] = '\0';
       return (mem);	
}
