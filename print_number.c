#include "main.h"

/**
  * print_number - Prints an integer using _putchar
  * @n: Integer to be printed
  *
  */
void print_number(int n) 
{
    int divisor = 1;
  
    if (n < 0) {
        putchar('-');
        n = -n;
    }
    while (n / divisor >= 10) {
        divisor *= 10;
    }
    while (divisor != 0) {
        putchar((n / divisor) % 10 + '0');
        divisor /= 10;
    }
}