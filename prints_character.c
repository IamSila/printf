#include "main.h"

/**
 * printf_char - prints a char.
 * @val: arguments.
 * Return: 1.
 */
int printf_char(va_list val)
{
	char characters;

	characters = va_arg(val, int);
	_putchar(characters);
	return (1);
}
