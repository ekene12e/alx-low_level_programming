#include <stdio.h>
/**
 *main - prints name of the file
 *@argc: size of command line arguments
 *@argv: content of the command line
 *Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
