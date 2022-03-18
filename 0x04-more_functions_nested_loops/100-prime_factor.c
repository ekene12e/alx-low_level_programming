#include <stdio.h>
/**
*main - prints the highest
*
*Return: 0
*/
int main(void)
{
	long n = 612852475143;
	long div;
	long fact = 0;

	for (div = 2; div < 612852475143; div++)
	{
		if ((n / div) == 0)
			fact = div;
	}
	printf("%ld\n", fact);
	return (0);
}
