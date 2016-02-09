/*
** read_file_buff.c for read_file_buff in /home/rahmeh_d/github/lib-c
** 
** Made by Rahmeh Daniel
** Login   <rahmeh_d@epitech.net>
** 
** Started on  Tue Feb  9 17:40:08 2016 Rahmeh Daniel
** Last update Tue Feb  9 17:42:19 2016 Rahmeh Daniel
*/

int            read_file_buff(char *path)
{
  char          buffer[500]; /*for exemple*/
  FILE          *file;
  size_t        nbread;

  file = fopen(path, "r");
  if (file)
    {
      while ((nbread = fread(buffer, 1, sizeof buffer, file)) > 0)
        fwrite(buffer, 1, nbread, stdout);
    }
  fclose(file);
}

int     main(int ac, char **av)
{
  read_file_buff(av[1]);
  my_putchar(\n);
  return (0);
}
