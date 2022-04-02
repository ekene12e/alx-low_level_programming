#include <stdio.h>
/**
 *main - prints name of the file
 *@argc: size of command line arguments
 *@argv: content of the command line
 *Return: 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
