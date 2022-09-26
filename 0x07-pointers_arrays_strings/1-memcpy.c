#niclude "main.h"

/**
 * _memcpy - memset function
 * @dest: content is to be copied
 * @src: source of data to be copied
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
