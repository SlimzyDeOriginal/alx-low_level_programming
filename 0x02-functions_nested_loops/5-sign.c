#include "main.h"
/**
 *print_sign - Entry point
 *Description: 'Prints the sign of int depending on value'
 *@n: 'the input number which is an integer'
 *Return: 1, 0, or -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}
