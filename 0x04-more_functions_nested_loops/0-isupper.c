#include "main.h"

/**
*_isupper - checks for upper case
*
*@c: number to be checked
*Return: 0 or 1
*/
int _isupper(int c)
{
	if (c  > 'a' && c <= 'z')
	{
		return (0);
	}
	else
		return (1);
}
