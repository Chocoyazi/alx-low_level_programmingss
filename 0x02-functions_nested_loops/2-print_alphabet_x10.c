#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet in lowercase followed by e new line
 *
 */

void print_alphabet_x10(void)
{
	char ch;
	int i;

	i = 0;
	
	while (i < 100)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		i++;
	}
}
