#include "main.h"
#include <stdio.h>
/**
*print_to_98 - Describes the main function
*
*Description:
*@n: some int
*Return: void
*/
void print_to_98(int n)
{
	int i;

	if (n >= 98)
		{
		for (i = n; i >= 98; i--)
		{
			if (i == 98)
				printf("%i", i);
			else
				printf("%i, ", i);
		}
		}
	else if (n < 98)
		{
		for (i = n; i <= 98; i++)
		{
			if (i == 98)
			printf("%i", i);
			else
			printf("%i, ", i);
		}
		}
	printf("\n");
}
