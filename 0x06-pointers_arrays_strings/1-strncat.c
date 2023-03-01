#include "main.h"

/**
 * _stncat - Concatenates two strings using at most
 * @dest: the string to be appended open
 * @src: The string to be appointed to dest
 * @n: number of bytes form src
 * Return: new string
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len=0;

	while (dest[index++])
		dest_len++;

	for (index= 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
