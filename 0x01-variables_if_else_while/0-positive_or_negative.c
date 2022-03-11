#include <stdlib.h>
#include <time.h>
/*
 *main - Prints if a random number is positive or negative
 *Description: Uses main function
 *Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%f is positive", n);
	}
	else if (n == 0)
	{
		printf("%f is zero", n);
	}
	else
	{
		printf("%f is negative", n);
	}
	return (0);
}
