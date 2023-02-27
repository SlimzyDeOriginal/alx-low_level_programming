#include "main.h"
/**
 *_abs - Entry point
 *Description: 'return the absolute value no matter the condition'
 *@a: 'the input number which is an integer'
 *Return: the absolute value
 */
int _abs(int a)
{
	if (a < 0)
	{
		return (-a);
	}
	else
	{
		return (a);
	}
}
