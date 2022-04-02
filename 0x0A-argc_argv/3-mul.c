#include <stdio.h>
#include <stdlib.h>
/**
 *main - prints name of the file
 *@argc: size of command line arguments
 *@argv: content of the command line
 *Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", (atoi(argv[1]) * atoi(argv[2])));
	return (0);
}
