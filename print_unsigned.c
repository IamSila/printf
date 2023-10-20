#include "main.h"
/**
 * printf_unsigned - print int
 * @args: argument to print
 * Return: number of characters printed
 */
int printf_unsigned(va_list args)
{
	unsigned int f = va_arg(args, unsigned int);
	int number, last = f % 10, digit, exp = 1;
	int  i = 1;

	f = f / 10;
	number = f;

	if (last < 0)
	{
		_putchar('-');
		number = -number;
		f = -f;
		last = -last;
		i++;
	}
	if (number > 0)
	{
		while (number / 10 != 0)
		{
			exp = exp * 10;
			number = number / 10;
		}
		number = f;
		while (exp > 0)
		{
			digit = number / exp;
			_putchar(digit + '0');
			number = number - (digit * exp);
			exp = exp / 10;
			i++;
		}
	}
	_putchar(last + '0');

	return (i);
}
