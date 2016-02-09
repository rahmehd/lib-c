/*
** mt_putnbr.c for my_putnbr in /home/rahmeh_d/github/lib-c
** 
** Made by Rahmeh Daniel
** Login   <rahmeh_d@epitech.net>
** 
** Started on  Tue Feb  9 10:59:30 2016 Rahmeh Daniel
** Last update Tue Feb  9 11:00:10 2016 Rahmeh Daniel
*/

int     my_put_nbr(int nbr)
{
  if (nbr < 0)
    {
      my_putchar('-');
      my_put_nbr(- (nbr));
    }
  if (nbr >=0 && nbr < 10)
    my_putchar(nbr + '0');
  else if (nbr >= 10)
    {
      my_put_nbr(nbr / 10);
      my_put_nbr(nbr % 10);
    }
}
