#include "main.h"
#include <stdio.h>

/**
 *print_buffer - a program that prints a buffer
 *@b: buffer to print
 *@size: buffer's size
 *Return: nothing
 */
void print_buffer(char *b, int size)
{
	int j, y, l;

	if (size <= 0)
		printf("\n");
	else
	{
		for (j = 0; j < size; j += 10)
		{
			printf("%.8x:", j);
			for (y = j; y < j + 10; y++)
			{
				if (y % 2 == 0)
					printf(" ");
				if (y < size)
					printf("%.2x", *(b + y));
				else
					printf("  ");
			}
			printf(" ");
			for (l = j; l < j + 10; l++)
			{
				if (l >= size)
					break;
				if (*(b + l) < 32 || *(b + l) > 126)
					printf("%c", '.');
				else
					printf("%c", *(b + l));
			}
			printf("\n");
		}
	}
}
