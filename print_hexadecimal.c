#include "main.h"

/**
 * printf_hex - prints an hexgecimal number.
 * @val: arguments.
 * Return: counter.
 */
int printf_hex(va_list val)
{
	int i;
	int *arr;
	int count = 0;
	unsigned int number = va_arg(val, unsigned int);
	unsigned int tail = number;

	while (number / 16 != 0)
	{
		number /= 16;
		count++;
	}
	count++;
	arr = malloc(count * sizeof(int));

	for (i = 0; i < count; i++)
	{
		arr[i] = tail % 16;
		tail /= 16;
	}
	for (i = count - 1; i >= 0; i--)
	{
		if (arr[i] > 9)
			arr[i] = arr[i] + 39;
		_putchar(arr[i] + '0');
	}
	free(arr);
	return (count);
}
