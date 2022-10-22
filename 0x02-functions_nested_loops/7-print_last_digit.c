#include "main.h"

/**
 * print_last_digit - prints the last digit of the number
 *
 * @n: input number as an integer
 *
 * Return: last digit
 */
int print_last_digit(int n)
{
	int l;

	l = n % 10;
	if (l < 0)
	{
		_putchar(-l + 48);
		return (-);
	}
	else
	{
		_putchar(l + 48);
		return (l);
	}
}
