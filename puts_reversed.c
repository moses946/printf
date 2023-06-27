#include "main.h"

/**
  * _puts_reversed - Prints a string reversed.
  * @str: String to be reversed
  *
  * Return: Number of characters printed.
  */
int _puts_reversed(char *str)
{
	int i = 0, j = 0;

	while (str[i])
	{
		i++;
		j++;
	}
	for (i = i - 1; i >= 0; i--)
		_putchar(str[i]);
	_putchar('\n');
	return (j);
}
