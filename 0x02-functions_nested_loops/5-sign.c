#include "main.h"
/**
*print_sign - Describes the main function
*
*Description:
*@n: is the parameter
* Return: int;
*/
int print_sign(int n)
{
	if ((n > 0))
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
