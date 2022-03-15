#include "main.h"
/**
*_islower - Describes the main function
*
*Description:
*@c: is the parameter
* Return: int;
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}

	else
	{
		return (0);
	}

}
