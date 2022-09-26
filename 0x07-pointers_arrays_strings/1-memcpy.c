#niclude "main.h"

/**
 * _memcpy - copies n bytes from src pointer to dest pointer
 * @dest: pointer to copy into
 * @src: pointer to be copied from
 * @n: sixe of bytes to copy
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
