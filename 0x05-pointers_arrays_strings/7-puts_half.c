#include "main.h"
/**
*puts_half - prints half of a string
*@str: any string
*/
void puts_half( char *str)
{
	int i = 0;
	int len;

	while (str[i] != '\0')
	{
		i++;
	}
	len = i - 1;
	
	if (i % 2 == 0)
	{
		int j;

		for (j = i/2; j <= len; j++)
		{
			_putchar(str[(j)]);
		}
	_putchar('\n');
	}
	else
	{
	int n = len / 2;
	int j;

	for (j = n; j <= len; j++)
	{
	 _putchar(str[(j + 1)]);
	}
	_putchar('\n');
	}
}
