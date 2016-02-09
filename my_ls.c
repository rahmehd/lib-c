/*
** my_ls.c for my_ls in /home/rahmeh_d/github/lib-c
** 
** Made by Rahmeh Daniel
** Login   <rahmeh_d@epitech.net>
** 
** Started on  Tue Feb  9 11:06:28 2016 Rahmeh Daniel
** Last update Tue Feb  9 11:07:52 2016 Rahmeh Daniel
*/

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <dirent.h>
#include "my.h"

int                     my_ls1()
{
  struct dirent         *d;
  DIR                   *dir;
  char                  *name;

  name = ".";
  dir = opendir(name);
  if (dir == NULL)
    {
      perror("ls");
      return (-1);
    }
  else
    {
      while ((d = readdir(dir)) != NULL)
        {
          if (d->d_name[0] != '.')
            {
              my_putstr(d->d_name);
              my_putchar('\n');
            }
        }
    }
  return (0);
}


int                     my_ls2(char *name)
{
  struct dirent         *d;
  DIR                   *dir;

  dir = opendir(name);
  if (dir == NULL)
    {
      perror("ls");
      return (-1);
    }
  else
    {
      while ((d = readdir(dir)) != NULL)
        {
          if (d->d_name[0] != '.')
            {
              my_putstr(d->d_name);
	      my_putchar('\n');
            }
        }
    }
  return (0);
}


int                     main(int ac, char **av)
{
  if (ac == 1)
    my_ls1();
  else if (ac == 2)
    my_ls2(av[1]);
  return (0);
}
