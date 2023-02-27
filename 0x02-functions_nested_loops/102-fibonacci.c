#include <stdio.h>
/**
 *main - Entry point
 *Description: 'Prints 50 fiboncci numbers separating them by commas'
 *
 *Return: always 0 (success)
 *
 */
int main(void)
{
	int a;
	unsigned long b = 0, c = 1, sum;

	for (a = 0; a < 50; a++)
	{
		sum = b + c;
		printf("%lu", sum);

		b = c;
		c = sum;

		if (a == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
