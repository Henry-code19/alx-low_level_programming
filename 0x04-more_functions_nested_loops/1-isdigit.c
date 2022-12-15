#include "main.h"

/**
 * _isdigit - Checks for a digit 0 through 9
 *
 * @c: character to check
 *
 * Return: 1 if character is a digit, otherwise 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
