#include "main.h"

/**
 * _isalpha - Displays 1 if input is uppercase, otherwise
 * displays 0
 *
 * @c: Input is ASCII code
 *
 * Return: 1 if uppercase, otherwise 0
 */

int _isalpha(int c)
{
	if  ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
