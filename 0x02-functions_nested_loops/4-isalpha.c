#include "main.h"
/**
 *_isalpha - Entry point
 *Description: 'Prints alphabets and return 1 but return 0 if otherwise'
 *@c: holds an int value of lower or upper case
 *Return: 1 for letters and 0 if otherwise
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
