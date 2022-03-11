#include <stdio.h>

/**
 * main - prints alphabets
 *
 * Description: Long description
 * Return: 0
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z' && ch != 'q' && ch != 'e'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
