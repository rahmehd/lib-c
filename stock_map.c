/*
** stock_map.c for stock_map in /home/rahmeh_d/github/lib-c
** 
** Made by Rahmeh Daniel
** Login   <rahmeh_d@epitech.net>
** 
** Started on  Wed Mar 30 14:17:22 2016 Rahmeh Daniel
** Last update Wed Mar 30 14:19:34 2016 Rahmeh Daniel
*/

char	**stock_map(char *buffer)
{
  char	**map;
  int	i;
  int	j;
  int	k;
  int	nb_lines;
  int	nb_colons;

  nb_colons = len_lines(buffer);
  nb_lines = count_lines(buffer);
  if ((map = malloc(sizeof(*map) * (nb_lines + 2))) == NULL)
    exit(1);
  i = 0;
  j = -1;
  while (++j < nb_lines + 1)
    {
      k = 0;
      if ((map[j] = malloc(sizeof(**map) * (nb_colons + 1))) == NULL)
        exit(1);
      while (buffer[i] && buffer[i] != '\n')
        map[j][k++] = buffer[i++];
      map[j][k] = '\0';
      i += 1;
    }
  map[j] = NULL;
  return (map);
}

int	len_lines(char *buffer)
{
  int	i;

  i = 0;
  while (buffer[i] != '\n')
    i++;
  return (i);
}

int	count_lines(char *buffer)
{
  int	i;
  int	nb_lines;

  nb_lines = 0;
  i = -1;
  while (buffer[++i])
    if (buffer[i] == '\n')
      nb_lines += 1;
  return (nb_lines);
}
