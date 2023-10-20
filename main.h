#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>

#define UNUSED(x) (void)(x)
#define BUFF_SIZE 1024

/* FLAGS */
#define F_MINUS 1
#define F_PLUS 2
#define F_ZERO 4
#define F_HASH 8
#define F_SPACE 16

/* SIZES */
#define S_LONG 2
#define S_SHORT 1


/**
 * struct format - match the conversion specifiers for printf
 * @id: type char pointer of the specifier i.e (l, h) for (d, i, u, o, x, X)
 * @f: type pointer to function for the conversion specifier
 *
 */

typedef struct format
{
	char *id;
	int (*f)();
} convert_match;

int printf_pointer(va_list val);
int printf_hex_aux(unsigned long int num);
int printf_HEX_aux(unsigned int num);
int printf_exclusive_string(va_list val);
int printf_HEX_fxn(va_list val);
int printf_hex(va_list val);
int printf_oct(va_list val);
int printf_unsigned(va_list args);
int printf_bin(va_list val);
int printf_srev(va_list args);
int printf_rot13(va_list args);
int printf_int(va_list args);
int printf_dec(va_list args);
int _strlen(char *s);
int *_strcpy(char *dest, char *src);
int _strlenc(const char *s);
int rev_string(char *s);
int _strlenc(const char *s);
int printf_37(void);
int printf_char(va_list val);
int printf_string(va_list val);
int _putchar(char c);
int _printf(const char *format, ...);
int get_flags(const char *format, int *a);
int get_width(const char *format, int *i, va_list list);
int get_width(const char *format, int *i, va_list list);
int get_size(const char *format, int *i);
int handle_print(const char *fmt, int *ind, va_list list, char buffer[],
	int flags, int width, int precision, int size);
int is_printable(char z);
int append_hexa_code(char ascii_code, char buffer[], int a);
int is_digit(char c);
long int convert_size_number(long int number, int size);
long int convert_size_unsgnd(unsigned long int number, int size);
int handle_write_char(char c, char buffer[],
        int flags, int width, int precision, int size);
int write_number(int is_negative, int ind, char buffer[],
        int flags, int width, int precision, int size);
int write_num(int ind, char buffer[],
        int flags, int width, int prec,
        int len, char spacing, char extra_c);
int write_unsgnd(int is_negative, int ind,
        char buffer[],
        int flags, int width, int precision, int size);
        int write_pointer(char buffer[], int ind, int length,
        int width, int flags, char padd, char extra_c, int padd_start);

void print_buffer(char buffer[], int *buff_ind);
int get_precision(const char *format, int *i, va_list list);


#endif
