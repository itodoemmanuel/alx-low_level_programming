#include "main.h"

/**
 * _strspn - Locates a character in a string
 * @s: This is the main C string to be scanned.
 * @accept: pointer to the substring we check for
 * Return: unsigned int, length of a prefix substring
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	char *ptr_accept = accept;

	while (*s++)
	{
		while (*accept++)
			if (*(s - 1) == *(accept - 1))
			{
				count++;
				break;
			}
		if (!(*--accept))
			break;
		accept = ptr_accept;
	}

	return (count);
}
