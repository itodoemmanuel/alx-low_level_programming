#include "main.h"

/**
 *  _strncat - concats two arrays
 *  @dest: destination of concat
 *  @src: source array to concat
 *  @n: amount of times to append
 *  Return: char value
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
