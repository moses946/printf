#include "main.h"

/**
  * _puts - Prints a string
  * @str: String to be printed
  *
  * Return: Number of characters printed
  */
int _puts(char *str)
{
	int i = 0;

	while (*str)
	{
		_putchar(*str);
		i++;
		str++;
	}
	return (i);
}
