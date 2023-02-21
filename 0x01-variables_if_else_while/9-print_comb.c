#include <stdio.h>
/**
 *main - Entry Point
 *Description: 'Print 1 to 9 with commas'
 *Return: always 0
 */
int main(void)
{
	int a;

	for (a = 48; a <= 57; a++)
	{
		putchar(a);
		if (a == 57)
		{
			continue;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
