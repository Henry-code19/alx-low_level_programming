#include "main.h"

/**
 * factorial - returns the factorial of a given a number.
 * @n: number to find factorial for
 * Return: if n > 0 ->> factorial of n.
 *         if n < 0 ->> 1 to indicate error.
 */
int factorial(int n)
{
	if (n < 1)
		return (-1);

	else if (n == 0)
		return (1);

	else
		return (n * factorial(n - 1));
}
