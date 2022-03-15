#include "main.h"
/**
*jack_bauer - Describes the main function
*
*Description:
* Return: void;
*/
void jack_bauer(void)
{
	int h;
	int m;

	for (h = 0; h < 24; h++)
	{
		for (m = 0; m <= 60; m++)
		{
		if (h < 10)
		{
		_putchar('0' + 0);
		}
		_putchar('0' + h);
		_putchar(':');
			if (m < 10)
			{
			
			_putchar('0' + 0);
			_putchar('0' + m)
			}
			else
			{
			_putchar('0' + m);
			}
		_putchar('\n');
			
		}
	}
}
