#include "main.h"

/**
 * _isalpha - inspects for alphabetic character
 * @c: the character to be examined
 * Return: 1 if c is a letter, 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
