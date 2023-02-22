#include "main.h"

/**
*_islower - Checks for lowercase characters
*@c: c is an ascii character
*Return: 1 for lowercase character and 0 for anything else
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
