#include "main.h"
/**
 * printf_rot13 - printf str to ROT13 place into buffer
 * @args: type struct va_arg where is allocated printf arguments
 * Return: counter
 *
 */
int printf_rot13(va_list args)
{
	int x, y, count = 0;
	int k = 0;
	char *s = va_arg(args, char*);
	char alpha[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char beta[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};

	if (s == NULL)
		s = "(null)";
	for (x = 0; s[x]; x++)
	{
		k = 0;
		for (y = 0; alpha[y] && !k; y++)
		{
			if (s[x] == alpha[y])
			{
				_putchar(beta[x]);
				count++;
				k = 1;
			}
		}
		if (!k)
		{
			_putchar(s[x]);
			count++;
		}
	}
	return (count);
}
