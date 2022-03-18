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
	long i;

	for (div = 2; div < 612852475143; div++)
	{
		if ((n % div) == 0)
		{
			for (i = 2; i < div; i++)
				{
					if (div % i == 0)
						break;
					else
						fact = div;
				}
		}
	}
	
	printf("%ld\n", fact);
	return (0);
}
