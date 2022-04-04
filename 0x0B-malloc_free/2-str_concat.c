#include <stdlib.h>

/**
 * _str_concat - Copies a string to new allocated space in memory
 *
 *@s1: The base string
 *@s2: added string
 *Return: Pointer to allocated memory containing copy of @str (SUCCESS)
 *OR NULL if @str is empty (FAILURE) OR
 *NUL if insufficient memory was available
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int s1_len = 0;
	unsigned int s2_len = 0;
	unsigned int mem_len = 0;
	unsigned int i, j;
	char *mem;

	/*if (s1 == NULL)*/
	/*	s1_len = 1;*/
	/*if (s2 == NULL)*/
		/*s2_len = 1;*/

	while (s1[s1_len] != '\0')
	{
		s1_len++;
	}
	while (s2[s2_len] != '\0')
        {
		s2_len++;
	}

	if (s1_len == 0 && s2_len == 0)
	{
		return ('\0');
	}

	mem_len = s1_len + s2_len + 2;

	for (i = 0; i <= s1_len; i++)
	{
		mem[i] = s1[i];
	}

	for (i = (s1_len + 1), j = 0; i <= mem_len; i++, j++)
	{
		mem[i] = s2[j];
	}
	mem[mem_len + 1] = '\0';
	return (mem);
}
