#include "main.h"

/**
* print_sign - Prints the sign of a number
*@n: n ian any integer
*
* Return: 1 for postive, -1 for negative
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}

