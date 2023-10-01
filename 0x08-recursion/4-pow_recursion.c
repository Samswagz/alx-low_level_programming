#include "main.h"

/**
 * _pow_recursion - A function that returns the power of a number
 * @x: The number to which the power will be raised
 * @y: the power of the number which will be raised
 * Return: -1 if y is less tham 0 and power if otherwise
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (_pow_recursion(x, (y - 1)) * x);
}
