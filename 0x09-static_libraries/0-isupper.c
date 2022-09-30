#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: member
 * Return: 1 (on success) otherwise 0
 */

int _isupper(int c)
{
	return ((c >= 'A' && c <= 'Z') ? 1 : 0);
}
