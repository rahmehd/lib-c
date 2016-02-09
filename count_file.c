/*
** count_file.c for cont_file in /home/rahmeh_d/github/lib-c
** 
** Made by Rahmeh Daniel
** Login   <rahmeh_d@epitech.net>
** 
** Started on  Tue Feb  9 11:40:28 2016 Rahmeh Daniel
** Last update Tue Feb  9 11:41:51 2016 Rahmeh Daniel
*/

int             my_count_file(char *path)
{
  DIR           *dir;
  struct dirent *d;
  int   i;

  i = 0;
  dir = opendir(path);
  if (dir == NULL)
    {
      perror("error");
      return (-1);
    }
  else
    {
      while ((d = readdir(dir)) != NULL)
        {
          if (d->d_name[0] != '.')
            {
              i++;
            }
        }
    }
  my_putstr("Nombre de fichier: ");
  my_put_nbr(i);
  my_putchar('\n');
  return (0);
}
