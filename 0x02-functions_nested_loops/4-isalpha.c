#include "main.h"

/**
 * _isalpha - dtermines if the character is an alphabetic one
 * @c: c is an ascii charactr
 * Return: 1 if  is an alphabetic character and 0 if anything else
 */

int _isalpha(int c)
{
	if (c >='a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
