#include <stdio.h>

/**
 * swap_int - Swaps the value of integers.
 * @a: The first integer to be swapped.
 * @b: The second integer to be swapped.
 *
 * Return: notin
 */

void swap_int(int *a, int *b)
/* the function that swaps te value of two integers. */
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
