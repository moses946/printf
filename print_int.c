#include "main.h"

/**
  * print_int - Prints integers to stdout
  * @n: Integer to be printed
  *
  * Return: Number of characters printed
  */
int print_int(int n)
{
	int i = 0;

	if (n != 0)
	{
		print_int(n / 10);
		_putchar((n % 10) + '0');
		i++;
	}
	return (i);
}
