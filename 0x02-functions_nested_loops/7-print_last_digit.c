#include "main.h"

/**
 * print_last_digit - checks number
 * @j: integer receipt by main.
 * Return: Returns r when it is positive absolute value,
 */
int print_last_digit(int j)
{
	int i;

	i = j % 10;

	if (i < 0)
	{
		i *= -1;
	}
	_putchar(i + '0');
	return (i);
}
