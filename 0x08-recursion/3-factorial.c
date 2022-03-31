#include "main.h"

/**
 * factorial - returns the length of a string
 * @n: string to calculate the length of
 *
 * Return: integer multiple
 */
int factorial(int n)
{
	if (n == 1)
		return (1);
	if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
