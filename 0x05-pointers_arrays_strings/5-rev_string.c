#include "main.h"
/**
*rev_string - reverses a string
*@s: string to be reversed
*/
void rev_string(char *s)
{
	int i = 0;
	int j;
	int k = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	char *rev;

	for (j = i - 1; j >= 0; j--)
	{
		rev[k] = s[j];
		k++;
	}
}
