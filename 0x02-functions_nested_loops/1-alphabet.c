#include <main.h>

/**
 * main-prints alaphabets
 *
 * Return: void
 */

void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{

		_putchar(letter);
		letter++;
	}
	_putchar(' \n');
}
