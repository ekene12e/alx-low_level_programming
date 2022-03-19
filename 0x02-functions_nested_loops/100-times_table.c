#include "main.h"
/**
*print_times_table - prints n times table starting from 0
*@n: n table
*print_numbertens- prints numbers between 10 and 9et numbee
*@a; parameter for sub
*Return: void
*/
void print_numbertens(int a);
void print_times_table(int n)
{
	int i, j, m;

	if (n < 15 && n > 0)
	{
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			m = j * i;
			if (m > 9 && m < 100)
			{
				print_numbertens(m);
			}
			else if (m >= 100)
			{
				_putchar(' ');
				_putchar((m / 100) + '0');
				if ((m - 100) > 9)
					_putchar(((m - 100) / 10) + '0');
				else
					 _putchar(0 + '0');
				_putchar(((m - 100) % 10) + '0');
			}
			else
			{
				if (m == 0 && j == 0)
					_putchar(m + '0');
				else
				{
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				_putchar((m % 10) + '0');
				}
			}
		if (j != n)
			_putchar(',');
		else
			_putchar('\n');
		}
	}
	}
}
void print_numbertens(int a)
{
_putchar(' ');
_putchar(' ');
_putchar((a / 10) + '0');
_putchar((a % 10) + '0');
}
