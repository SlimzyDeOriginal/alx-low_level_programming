#include "main.h"
/**
 *_islower - Entry point\
 *Description: 'show 1 if the input is lowercase and 0 otherwise'
 *@c: integer for the checker
 *Return: 1 for lowercase and 0 if not lowercase
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}

