#include "main.h"
/**
*_strlen - returns length of a string
*
*@s: any string
*Return: returns i
*/
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
