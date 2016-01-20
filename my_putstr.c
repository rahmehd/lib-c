/*
** my_putstr.c for my_putstr in /home/rahmeh_d/github/lib-c
** 
** Started on  Wed Jan 20 18:00:30 2016 Rahmeh Daniel
** Last update Wed Jan 20 18:03:57 2016 Rahmeh Daniel
*/

int	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    {
      my_putchar(str[i]);
      i++;
    }
  return (0);
}
