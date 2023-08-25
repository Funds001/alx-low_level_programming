#include "main.h"

/**
 *leet - a program that encodes a string into 1337
 *@s: string to encode
 *Return: address of s
 */
char *leet(char *s)
{
	int y;
	int l;
	char a[] = "aAeEoOtTlL";
	char b[] = "4433007711";

	for (y = 0; *(s + y); y++)
	{
		for (l = 0; l <= 9; l++)
		{
			if (a[l] == s[y])
				s[y] = b[l];
		}
	}
	return (s);
}
