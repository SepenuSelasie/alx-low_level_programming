#include "main.h"

/**
 * _isupper - determines if a character is uppercase
 *
 * @c: character to be checked
 *
 * Return: 1 if character is uppercase
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
