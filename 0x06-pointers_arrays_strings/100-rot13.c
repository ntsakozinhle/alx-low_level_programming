#include "main.h"
#include <stdio.h>

/**
 * rot13 - a fuction that encodes a string using rot13
 *
 * @str: parameter for encoded string
 *
 * Return: str
 */

char *rot13(char *str)
{
	int a;
	int b;

	const char *rot = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	const char *revrot = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (a = 0 ; str[a] != '\0'; a++)
	{
		for (b = 0 ; rot[b] != '\0' ; b++)
		{
			if (str[a] == rot[b])
			{
				str[a] = revrot[b];
				break;
			}
		}
	}

	return (str);
}
