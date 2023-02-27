#include "main.h"
/**
 *print_last_digit - Entry point
 *Description: 'Prints the last digit of a number and return the value'
 *@a: is the input integer
 *Return: the value of the last digit
 */
int print_last_digit(int a)
{
	int b;

	b = a % 10;
	if (b < 0)
	{
		_putchar(-b + 48);
		return (-b);
	}
else
	{
		_putchar(b + 48);
		return (b);
	}
}
