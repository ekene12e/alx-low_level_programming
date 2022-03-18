#include <stdio.h>
/**
*main - prints fizz or buzz or fizzbuzz
*
*Return: void
*/
int main(void)
{
	int i;

	for (i = 1; i < 101; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("Fizzbuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else
			printf("%i ", i);
	}
	printf("\n");
	return (0);
}
