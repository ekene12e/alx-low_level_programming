#include <stdio.h>
/**
 *main - prints name of the file
 *@argc: size of command line arguments
 *@argv: content of the command line
 *Return: 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
