#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	int f1;
	int f2;
	int f3;
	int n;

	for (n = 1; n <= 50; n++)
	{
		f1 = n;
		f2 = n + 1;

		if (n != 50)
		{
			printf("%d, ", f1);
		}
		else
		{
			f3 = f1 + f2;
			f1 = f2;
			f2 = f3;
			printf("%d, ", f1);
			printf("\n");
		}
	}

	return (0);
}
