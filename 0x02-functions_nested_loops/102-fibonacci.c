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
	int n;

	for (n = 1; n <= 50; n++)
	{
		f1 = n;
		f2 = n + 1;

		if (f1 == 1 && f2 == 2)
		{
			printf(f1);
			printf("\n");
			printf(f2);
		}
		else
		{
			f1 = f2;
			printf(f1);
			printf("\n");
			printf(f1 + f2);
		}

	}
	return (0);
}
