/*
** read_file_buff.c for read_file_buff in /home/rahmeh_d/github/lib-c
** 
** Made by Rahmeh Daniel
** Login   <rahmeh_d@epitech.net>
** 
** Started on  Tue Feb  9 17:40:08 2016 Rahmeh Daniel
** Last update Tue Feb 16 16:10:36 2016 Rahmeh Daniel
*/

int            read_file_buff(char *path)
{
  int           fd;
  char          *buffer;
  int           line_number;
  struct stat   s;
  int		k;

  if (stat(map_path, &s) == -1)
    return (NULL);
  k = s.st_size;
  line_number = 0;
  if ((buffer = malloc(k * sizeof(char))) == NULL)
    exit(1);
  fd = open(file, O_RDONLY);
  if(fd == -1)
    exit(1);
  while (read(fd, buffer, 1024))
    my_putstr_plus(buffer);
  close(fd);
  return (0);
}

int     main(int ac, char **av)
{
  read_file_buff(av[1]);
  my_putchar(\n);
  return (0);
}
