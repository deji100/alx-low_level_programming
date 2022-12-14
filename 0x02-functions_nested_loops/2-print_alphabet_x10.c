#include "main.h"

/**
 * print_alphabet_x10 - prints alphabets in lowercase.
 */
void print_alphabet_x10(void)
{
	char letter;
	int n;

	for (n = 'a'; n < 10; n++)

	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
}


