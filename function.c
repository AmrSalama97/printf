#include <stdarg.h>
#include <stdio.h>
#include "main.h"

int _printf(const char *format, ...)
{
    va_list args;
    va_start(args, format);

    int count = 0;
    for (const char *p = format; *p != '\0'; p++)
    {
        if (*p != '%')
        {
            putchar(*p);
            count++;
            continue;
        }
        p++;
        switch (*p)
        {
            case 'c':
            {
                char c = va_arg(args, int);
                putchar(c);
                count++;
                break;
            }
            case 's':
            {
                char *s = va_arg(args, char *);
                for (char *t = s; *t != '\0'; t++)
                {
                    putchar(*t);
                    count++;
                }
                break;
            }
            case '%':
            {
                putchar('%');
                count++;
                break;
            }
        }
    }

    va_end(args);
    return count;
}
