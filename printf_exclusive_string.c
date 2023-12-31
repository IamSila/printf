#include "main.h"
/**
 * printf_exclusive_string - print exclusuives string.
 * @val: argumen t.
 * Return: the length of the string.
 */

int printf_exclusive_string(va_list val)
{
	char *a;
	int i, length = 0;
	int cast;

	a = va_arg(val, char *);
	if (a == NULL)
		a = "(null)";
	for (i = 0; a[i] != '\0'; i++)
	{
		if (a[i] < 32 || a[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			length = length + 2;
			cast = a[i];
			if (cast < 16)
			{
				_putchar('0');
				length++;
			}
			length = length + printf_HEX_aux(cast);
		}
		else
		{
			_putchar(a[i]);
			length++;
		}
	}
	return (length);
}
