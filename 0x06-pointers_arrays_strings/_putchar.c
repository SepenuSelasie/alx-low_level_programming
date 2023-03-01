#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character to stdout
 * @c: character to be printed
 *
 * Return: Always 0 (Sucess)
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
