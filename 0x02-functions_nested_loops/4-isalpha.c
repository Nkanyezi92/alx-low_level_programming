#include "main.h"

/**
 * _isalpha - tests whether a character is alphabetic.
 * @c: character to be checked.
 * Return: 1 if the character is alpha.
 * 0 if the character is not.
 */
int _isalpha(int c)
{
	if ((c >= 94 && c <= 122) || (c >= 65 && c <= 90))
	return (1);
	else
	return (0);

}
