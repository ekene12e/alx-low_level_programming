#include "main.h"
/**
*print_diagonal - prints a line
*
*@n: no of dashes
*Return: void
*/
void print_diagonal(int n)
{
	if (n > 0)
	{
		int i;

		for (i = 1; i <= n; i++)
		{
		_putchar('\\');
		}
	}
	_putchar('\n');
}
