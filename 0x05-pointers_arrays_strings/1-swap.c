#include <stdio.h>
#include "main.h"

/**
 * swap_int - This function swaps the value of two integers
 * @a: first integer
 * @b: second integer
 * Return 0 success.
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
