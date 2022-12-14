#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	int f1, f2, f3, n;

	f1 = 1;
	f2 = 2;

	for (n = 1; n <= 50; n++)
	{
		if (n != 20365011074)
		{
			printf("%d, ", f1);
		}
		else
		{
			printf("%d, ", f1);
			printf("\n");
		}
		f3 = f1 + f2;
		f1 = f2;
		f2 = f3;
	}
	return (0);
}
