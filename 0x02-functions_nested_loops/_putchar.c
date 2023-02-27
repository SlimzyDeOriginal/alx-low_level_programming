#include "main.h"
#include <unistd.h>
/**
 * _putchar - wrties to the c standard output
 *
 * @c: 'the charact to be written'
 *
 * Return: 1 (Success)
 * on error, return -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
