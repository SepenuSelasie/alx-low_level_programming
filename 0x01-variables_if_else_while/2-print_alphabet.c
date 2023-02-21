#include <stdio.h>

/**
 * main- Display letters of the alphabet
 *
 * Description: Program displays letters of the aplhabet in order
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 97;

	while (i < 123)
	{
		putchar (i);
		i++;
	}
	putchar(10);     
	return (0);
}
