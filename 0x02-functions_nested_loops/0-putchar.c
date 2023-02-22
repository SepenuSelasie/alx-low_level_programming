#include "main.h"
/**
 * main - Program prints _putchar
 *
 * Description: Program uses the standard print function
 *
 * Return: Always 0 (Sucess)
 */

int main(void)
{
	char text[10] = "_putchar";
	int i = 0;

	for (i = 0; 1 < 9; i++)
	{
		_putchar(text[i]);
	}	
	_putchar('\n');
	return (0);
}

