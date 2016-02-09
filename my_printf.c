/*
** my_printf.c for my_printf.c in /home/rahmeh_d/github/lib-c
** 
** Made by Rahmeh Daniel
** Login   <rahmeh_d@epitech.net>
** 
** Started on  Tue Feb  9 11:13:45 2016 Rahmeh Daniel
** Last update Tue Feb  9 11:17:25 2016 Rahmeh Daniel
*/

#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

int             my_check_flags(va_list a, char *s, int i)
{
  if (s[i + 1] == 's')
    my_putstr(va_arg(a, char *));
  else if (s[i + 1] == 'c')
    my_putchar(va_arg(a, int));
  else if (s[i + 1] == 'i' || s[i + 1] == 'd')
    my_put_nbr(va_arg(a, int));
  else if (s[i + 1] == 'u')
    my_put_unsigned(va_arg(a, unsigned int));
  else if (s[i + 1] == '%')
    my_putchar('%');
  return (0);
}

int             my_printf(char *s, ...)
{
  va_list       a;
  int           i;

  va_start(a, s);
  i = 0;
  while (s[i] != '\0')
    {
      if (s[i] == '%')
        {
          my_check_flags(a, s, i);
          i = i + 1;
        }
      else
        my_putchar(s[i]);
      i = i + 1;
    }
  va_end(a);
  my_putchar('\n');
}

