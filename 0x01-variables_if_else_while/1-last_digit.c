#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*
*main -
*Description:
*Return: 0
*/
int main(void)
{
	int n;
    int d;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
    d = n % 10;
    if (d == 0)
	{
		printf("Last digit of %i is %i and is 0\n", n, d);
	}
	else if (d > 5)
	{
		printf("Last digit of %i is %i and is greater thn 5\n", n, d);
	}
	else
	{
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, d);
	}
	return (0);
}