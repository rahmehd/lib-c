/*
** my_show_list.c for my_show_list in /home/rahmeh_d/github/lib-c
** 
** Made by Rahmeh Daniel
** Login   <rahmeh_d@epitech.net>
** 
** Started on  Tue Feb  9 11:31:22 2016 Rahmeh Daniel
** Last update Tue Feb  9 11:32:10 2016 Rahmeh Daniel
*/

int             my_show_list(t_list *list)
{
  t_list        *elem;

  elem = *list;
  while (list != NULL)
    {
      my_putstr(list->str);
      my_putchar('\n');
      list = list->next;
    }
}
