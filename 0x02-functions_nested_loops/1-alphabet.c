#include "main.h"

/**
 * function prints alphabet in lowercase with a new line at the end of it.
*/
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);
	_putchar('\n');
}
