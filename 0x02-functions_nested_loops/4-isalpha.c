#include "main.h"
/**
*_isalpha - Describes the main function
*
*Description:
*@c: is the parameter
* Return: int;
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}

	else
	{
		return (0);
	}

}
