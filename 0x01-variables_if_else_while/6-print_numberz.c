#include <stdio.h>
/**
 *main - Entry point
 *Description: 'print numbers using only putchar'
 *Return: always 0
 */
int main(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
	putchar(a + 48);
	}
putchar('\n');
return (0);
}
