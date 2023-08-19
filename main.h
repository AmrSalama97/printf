#ifndef MAIN_H
#define MAIN_H
#define BUFFER_SIZE 1024
#include <stdarg.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>

/**
 * struct s_flag- flag structure.
 * @sharp: sharp flag
 * @spc: spc flag
 * @plus: plus flag
 * @zero: zero flag
 * @width : field width
 * @prcs: precision
 * @isPrcs: isPrecision
 * @lenMod: length modifiers
 * @bar: length modifiers
 */
typedef struct s_flag
{
	bool sharp;
	bool spc;
	bool plus;
	char lenMod;
	bool zero;
	int width;
	bool isPrcs;
	int prcs;
	bool bar;
} t_flag;

int _putchar(char c);
int _puts(char *str, t_flag *flags);
int _strlen(char *s);
int _printf(const char *format, ...);
int _putnbr(unsigned long int a, bool isToPut);
int _putd(long int n, t_flag flags);
char *_uitoa_base(unsigned long int n, int base);
int _isinstr(char *str, char toFind);
void _to_upper(char *s);
int _isprintable(char c);
int _putNonPrintable(char *str, t_flag *flags);
int _putAddress(unsigned long int address, t_flag *flags);
void resetFlags(t_flag *flags);
void getFlags(const char **format, t_flag *flags, va_list args);
int _putbase(unsigned long int n, char base, t_flag flags);
long int _va_arg(va_list ap, char type);
unsigned long int _uva_arg(va_list ap, char type);
int _atoi(const char *str);
int getConversion(const char *format, va_list args, t_flag *flags);
int _putc(char c, t_flag flags);
int _putrevstring(char *s);
int _rot13(char *str);
#endif /**main.h task*/
