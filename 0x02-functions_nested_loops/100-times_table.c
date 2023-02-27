#include "main.h"
/**
 *print_times_table - entry point
 *Description: 'prints a times table starting with 0'
 *@n: the input integer
 *
 *
 */
void print_times_table(int n)
{
	int a, b, c;

	if (n >= 0 && n <= 15)
	{
		for (a = 0; a <= n; a++)
		{
			for (b = 0; b <= n; b++)
			{
				c = b * a;
				if (b == 0)
				{
					_putchar(c + 48);
				}
				else if (c < 10 && b != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(c + 48);
				}
				else if (c >= 10 && c < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((c / 10) + 48);
					_putchar((c % 10) + 48);
				}
				else if (c >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((c / 100) + 48);
					_putchar(((c / 10) % 10) + 48);
					_putchar((c % 10) + 48);
				}
			}
			_putchar('\n');
		}
	}
}
