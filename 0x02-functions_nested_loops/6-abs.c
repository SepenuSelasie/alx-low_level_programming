#include "main.h"

/**
 * _abs - compute the absolute value of an integer
 * @n: n is any integer whehte negative or postive
 *
 * Return: absolute value 
 */

int _abs(int n)
{
	if  (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-n);
	}
	else 
	{
		return (n);
	}
}
