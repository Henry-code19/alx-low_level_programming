#include "main.h"

/**
 * print_sign - Shows + if input is greater than zero,
 * show 0 if input is zero, other show -
 *
 * @n: input number is an integer
 *
 * Return: 1 if input > 0, 0 if input == 0, else -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
	_putchar('\n');
}
