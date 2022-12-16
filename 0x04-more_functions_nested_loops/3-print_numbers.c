#include "main.h"

/**
  * print_numbers - Function to print numbers from 0 - 9
  *
  * Return: Always 0
  */

void print_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
