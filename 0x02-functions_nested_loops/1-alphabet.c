#include "main.h"
/**
*main - Describes the main function
*
*Description:
*Return: 0
*/
void print_alphabet(void)
{
	char ch;

	for(ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
		_putchar('\n')
	}
	return (0);
}
