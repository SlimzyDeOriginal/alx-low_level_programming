#include "main.h"
/**
 *print_alphabet - Entry point
 *Description: 'Will print alphabets a - z'
 *Return: always 0 (sucess)
 */
void print_alphabet(void)
{
	int a;

	for (a = 97; a <= 122; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
