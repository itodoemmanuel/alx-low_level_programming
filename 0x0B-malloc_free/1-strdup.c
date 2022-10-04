#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strlen - count array
 * @s: array of elements
 * Return: 1
 */

char *_strdup(char *str)
{
	char *duplicate_str;
	int i = 0, len = 0;

	if (str == NULL) /* validate str input */
		return (NULL);
	while (*(str + i))
		len++, i++;
	len++; /* add null terminator to length */

	uplicate_str = malloc(sizeof(char) * len); /* allocate memory */

	if (duplicate_str == NULL) /* validate memory */
		return (NULL);

	i = 0;
	while (i < len)
	{
		*(duplicate_str + i) = *(str + i);
		i++;
	}
	return (duplicate_str);
}
