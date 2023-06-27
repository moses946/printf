#include "main.h"

/**
  * int_to_bin - Converts an integer to binary and prints it.
  * @val: Integer passed as parameter.
  *
  * Return: Number of characters printed.
  */
int int_to_bin(int val)
{
	int i = 0;

	if (val != 0)
	{
		int_to_bin(val / 2);
		_putchar((val % 2) + '0');
		i++;
	}
	return (i);
}
