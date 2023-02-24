#include "main.h"

/**
 * _isdigit - determines whether charceter is a digit 
 * @c: charcater to be checked
 *
 * Return: 1 if a between 0-9 and 0 if otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
