#include "main.h"
/**
*print_alphabet_x10 - Describes the main function
*
*Description:
*Return: void
*/
void print_alphabet_x10(void)
{
	for (int i = 0; i <= 9; i++)
	{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
		_putchar('\n');

	}
}
