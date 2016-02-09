/*
** disp_stdarg.c for disp_strarg in /home/rahmeh_d/github/lib-c
** 
** Made by Rahmeh Daniel
** Login   <rahmeh_d@epitech.net>
** 
** Started on  Tue Feb  9 11:04:34 2016 Rahmeh Daniel
** Last update Tue Feb  9 11:04:51 2016 Rahmeh Daniel
*/

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

int             disp_stdarg(char *s, ...)
{
  va_list       a;
  int           i;

  va_start(a, s);
  i = 0;
  while (i< my_strlen(s))
    {
      if (s[i] == 's')
        my_putstr(va_arg(a, char *));
      else if (s[i] == 'c')
        my_putchar(va_arg(a, int));
      else if (s[i] == 'i')
        my_put_nbr(va_arg(a, int));
      my_putchar('\n');
      i = i + 1;
    }
  va_end(a);
}
