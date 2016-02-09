/*
** my_file_info.c for file_info in /home/rahmeh_d/github/lib-c
** 
** Made by Rahmeh Daniel
** Login   <rahmeh_d@epitech.net>
** 
** Started on  Tue Feb  9 11:36:08 2016 Rahmeh Daniel
** Last update Tue Feb  9 11:38:00 2016 Rahmeh Daniel
*/

#include <stdlib.h>
#include <stdio.h>
#include <dirent.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

int             my_minor_major(char *argv, struct stat sb)
{
  int   min;
  int   maj;

  min = minor(sb.st_rdev);
  maj = major(sb.st_rdev);
  if (sb.st_rdev == 0)
    {
      printf("Minor: N/A\n");
      printf("Major: N/A\n");
    }
  else
    {
      printf("Minor: %d\n", min);
      printf("Major: %d\n", maj);
    }
}

char            get_type(struct stat sb)
{
  if (S_ISDIR(sb.st_mode) != 0)
    return ('d');
  else if (S_ISREG(sb.st_mode) != 0)
    return ('r');
  else if (S_ISCHR(sb.st_mode) != 0)
    return ('c');
  else if (S_ISBLK(sb.st_mode) != 0)
    return ('b');
  else if (S_ISLNK(sb.st_mode) != 0)
    return ('l');
  else if (S_ISSOCK(sb.st_mode) != 0)
    return ('s');
  else if (S_ISFIFO(sb.st_mode) != 0)
    return ('o');
}

int             info_read(char *argv1, struct stat sb)
{
  my_putchar('\n');
  printf("Type: %c\n", get_type(sb));
  printf("Inode: %d\n", sb.st_ino);
  printf("Hard Link: %d\n", sb.st_nlink);
  printf("Size: %d\n", sb.st_size);
  printf("Allocated space: %d\n", sb.st_blocks * 512);
  my_minor_major(argv1, sb);
  printf("UID: %d\n", sb.st_uid);
  printf("GID: %d\n", sb.st_gid);
}

int             main(int argc, char **argv)
{
  struct stat   sb;
  int   i;
  int   p;

  if (stat(argv[1], &sb) == -1)
    {
      perror("stat");
      exit(EXIT_SUCCESS);
    }
  my_putstr("Name: ");
  while (argv[1][i] != '\0')
    {
      if (argv[1][i] == '/')
        argv[1][i] = i + 1;
      i = i + 1;
    }
  while (argv[1][p] != '\0')
    {
      my_putchar(argv[1][p]);
      p = p + 1;
    }
  info_read(argv[1], sb);
  return (0);
}
