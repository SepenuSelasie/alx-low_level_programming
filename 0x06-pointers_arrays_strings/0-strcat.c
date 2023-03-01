#include "main.h"

/**
 * _strcat - Concatenates the string pointed by @src , including the terminat
 * @dest: destination character
 * @src: source char
 * Return: new char
 */


char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
