#include "main.h"
#include <stdio.h>

/**
 * rot13 - encodes a string using rot13
 * @str: the string to be encoded
 *
 * Return: a pointer to the encoded string
 */
char *rot13(char *str)
{
	int i;
	int j;
	char data[] =
		"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] =
		"NOPQRSTUVWXYZABCDEFHIJKLMnopqrstuvwxyzabcdefghijklm";
	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (str[i] == data[j])
			{
				str[i] = datarot[j];
				break;
			}
		}
	}
	return (str);
}
