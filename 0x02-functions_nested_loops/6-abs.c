#include "main.h"

#include <string.h>

/**
 * _abs - Computes absolute value of an integer
 * @c: The number to be computekd
 * Return: Absolute value of number or zero
 */

int _abs(int c)
{
	if (c < 0)
	{
	int abs_val;

	abs_val = c * -1;
	return (abs_val);
	}
	return (c);
}
