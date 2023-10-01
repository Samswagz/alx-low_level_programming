#include "main.h"

/**
 * factorial - A function that returns the factiorial of a given number
 * @n: The number whose factorial is to be returned
 * Return: -1, if n is less than 0, 1
 * if n is equal to 0 and 1 and factorial if n is greater than 1
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
		return (n * factorial(n - 1));
}
