#include "main.h"
/**
*print_last_digit - Describes the main function
*
*Description:
*@n: is the parameter
* Return: int;
*/
int print_last_digit(int n)
{
	int s = n % 10;

	if (s < 0)
		s *= -1;

	_putchar('0' + s);
	return (s);
}
