#include "main.h"

/**
 *string_toupper - a program that changes all lowercase
 *letters of a string to uppercase
 *@s: the string
 *Return: character
 */

char *string_toupper(char *s)
{

	int y;

	y = 0;
	while (*(s + y))
	{
		if (*(s + y) >= 'a' && *(s + y) <= 'z')
			*(s + y) -= 'a' - 'A';
		y++;
	}
	return (s);
}
