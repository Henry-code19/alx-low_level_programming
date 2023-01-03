#include "main.h"

/**
 * _memcpy - copies bytes from memory area to another memory area.
 * @n: bytes to be copied.
 * @src: source memory area.
 * @dest: destination memory area.
 * Return: pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + 1) = *(src + 1);

	return (dest);
}
