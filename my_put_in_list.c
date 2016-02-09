/*
** my_put_in_list.c for my_put_in_list in /home/rahmeh_d/github/lib-c
** 
** Made by Rahmeh Daniel
** Login   <rahmeh_d@epitech.net>
** 
** Started on  Tue Feb  9 11:30:33 2016 Rahmeh Daniel
** Last update Tue Feb  9 11:31:02 2016 Rahmeh Daniel
*/

int             my_put_in_list(t_list **list, char *s)
{
  t_list        *elem;

  if ((elem = malloc(sizeof(*elem))) == NULL)
    return (1);
  elem->s = s;
  elem->next = *list;
  *list = elem;
  return (0);
}
