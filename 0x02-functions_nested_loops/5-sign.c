#include "main.h"

/**
 * print_sign - Prints the sign of a number
 *@n: n ian any integer
 *Return: 1 and + for positive numbers, -1 and - for negative numbers 
 */

int print_sign(int n)
{

		if (n > 0)
		{
			_putchar('+');
			return (1);
		}
		else if (n == 0)
		{
			_putchar('0');
			return (0);
		}
		else 
		{
			_putchar('-');
			return (1);
		}
}
