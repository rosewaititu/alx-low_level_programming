#include "main.h"
/**
 * _isalpha - controls if a character is alphabetical
 * @c: character to be verified
 * Return: return 0 or 1
 */
int _isalpha(int c)

	{
			return ((c >= 97 && c <= 122) || (c >= 65 && c <= 90));
	}
