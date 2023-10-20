#include "main.h"

/**
 * printf_bin - print binary number.
 * @val: arguments.
 * Return: 1.
 */
int printf_bin(va_list val)
{
	int flag = 0;
	int count = 0;
	int i, x = 1, y;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int z;

	for (i = 0; i < 32; i++)
	{
		z = ((x << (31 - i)) & num);
		if (z >> (31 - i))
			flag = 1;
		if (flag)
		{
			y = z >> (31 - i);
			_putchar(y + 48);
			count++;
		}
	}
	if (count == 0)
	{
		count++;
		_putchar('0');
	}
	return (count);
}
