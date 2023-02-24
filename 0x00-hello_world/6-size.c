#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: This file determined the size of the various data types
 *
 * Return: Always 0 (Success)
 */
int  main(void)
{
	printf("Size of char :%d byte(s)\n", (int) sizeof(char));
	printf("Size of int : %d byte(s)\n", (int) sizeof(int));
	printf("Size of long int: %d byte(s)\n", (int) sizeof(long int));
	printf("Size of lonh lonh int: %d byte(s)\n", (int) sizeof(long long int));
	printf("Size of float: %d byte(s)\n", (int) sizeof(float));

			return (0);
}
