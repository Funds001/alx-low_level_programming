#include "main.h"

/**
 *reverse_array - a program that reverses the content of
 * an array of integers
 *@a: an array of integers
 *@n: the number of elements to swap
 *Return: void
 */

void reverse_array(int *a, int n)
{
	int s, y;

	for (s = 0; (s < (n - 1) / 2); s++)
	{
		y = a[s];
		a[s] = a[n - 1 - s];
		a[n - 1 - s] = y;
	}
}
