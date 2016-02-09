/*
** my_concat_str.c for concat_str in /home/rahmeh_d/github/lib-c
** 
** Made by Rahmeh Daniel
** Login   <rahmeh_d@epitech.net>
** 
** Started on  Tue Feb  9 11:26:50 2016 Rahmeh Daniel
** Last update Tue Feb  9 11:27:10 2016 Rahmeh Daniel
*/

char    *my_concat(char *str1, char *str2)
{
  int   i;
  int   j;
  char  *len;

  i = 0;
  len = malloc(sizeof(char) *(my_strlen(str1) + my_strlen(str2) + 1));
  while (str1[i])
    {
      len[i] = str1[i];
      i++;
    }
  j = i;
  i = 0;
  while (str2[j])
    {
      len[j] = str2[i];
      i++;
      j++;
    }
  my_putstr(len);
  return (0);
}
