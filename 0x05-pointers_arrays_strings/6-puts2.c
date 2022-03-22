#include "main.h"
/**
*puts2 - prints every other xter
*@str: string
*/
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	for (j = 0; j <= i; j = j + 2)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
