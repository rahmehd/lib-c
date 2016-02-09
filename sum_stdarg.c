/*
** sum_stdarg.c for std_arg in /home/rahmeh_d/github/lib-c
** 
** Made by Rahmeh Daniel
** Login   <rahmeh_d@epitech.net>
** 
** Started on  Tue Feb  9 11:03:36 2016 Rahmeh Daniel
** Last update Tue Feb  9 11:03:47 2016 Rahmeh Daniel
*/

#include <stdlib.h>
#include <stdarg.h>

int             sum_stdarg(int i, int nbr, ...)
{
  va_list       a;
  int           c;
  int           tmp;

  tmp = 0;
  c = 1;
  va_start(a, nbr);
  while (nbr >= c)
    {
      if (i == 0)
        tmp = tmp + va_arg(a, int);
      else if (i == 1)
        tmp = tmp + my_strlen(va_arg(a, char *));
      else
        return (-1);
      c = c + 1;
    }
  va_end(a);
  return (tmp);
}
