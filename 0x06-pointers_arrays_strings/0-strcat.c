#include "main.h"
/**
**_strcat - concatenates two strings
*@*dest: base string
*@*src: string to be appened
*Return: string address
*/
char *_strcat(char *dest, char *src)
{
	int len_s, len_d;

	while (dest[len_d] != '\0')
	{
		len_d++;
	}
	/*d = len_d - 1;*/

	while (src[len_s != '\0'])
	{
		dest[len_d] = src[len_s];
		len_d++;
		len_s++;
	}
	/*s = len_s - 1;*/

	/*for (i = 0; i <= len_s; i++)*/
	/*{*/
		/*dest[len_d + i] = src[i];*/
	/*}*/
	dest[len_d] = '\0';
	return (dest);
}
