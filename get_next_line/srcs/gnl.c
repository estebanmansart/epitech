/*
** get_next_line.c for gnl in /home/mansar_e/rendu/Projets/CPE/CPE_2015_getnextline
**
** Made by Mansart Esteban
** Login   <mansar_e@epitech.net>
**
** Started on  Fri Jan 15 23:11:18 2016 Mansart Esteban 
** Last update Fri May 27 15:43:31 2016 Mansart Esteban
*/

#include		"gnl.h"

void                    my_memset_gnl(char *str, char c, int len)
{
  char                  *begin;
  int                   i;

  i = 0;
  if ((begin = malloc(sizeof(char))) != NULL)
    {
      *begin = *str;
      while (i < len + 1)
	{
	  *str = c;
	  str++;
	  i++;
	}
      *str = c;
      *str = *begin;
    }
}

int		str_contain(char *str, char c)
{
  int		i;
  int		n;

  n = 0;
  i = 0;
  while (str[i])
    if (str[i++] == c)
      n++;
  return (n);
}

char		*my_cat(char *a, char *b)
{
  int		i;
  int		j;
  int		lenA;
  int		lenB;
  char		*ret;

  lenA = 0;
  lenB = 0;
  while (a[lenA])
    lenA++;
  while (b[lenB])
    lenB++;
  if ((ret = malloc(sizeof(char) * (lenA + lenB + 1))))
    {
      i = -1;
      j = -1;
      while (++i < lenA)
	ret[i] = a[i];
      while (++j < lenB)
	ret[i++] = b[j];
      ret[i] = 0;
      return (ret);
    }
  return (NULL);
}

char		*separate(char **str)
{
  int		i;
  int		j;
  char		*ret;

  i = 0;
  while ((*str)[i] != '\n' && (*str)[i])
    i++;
  if ((ret = malloc(sizeof(char) * (i + 2))))
    {
      j = 0;
      while (j < i)
	{
	  ret[j] = **str;
	  (*str)++;
	  j++;
	}
      ret[j] = 0;
      if (**str == '\n' && (*str) + 1)
	(*str)++;
      return (ret);
    }
  return (NULL);
}

char		*gnl(const int fd)
{
  static char	*stack = "";
  static int	already = 0;
  char		buff[READ_SIZE + 1];
  int		size;

  size = 1;
  if (fd >= 0)
    {
      if (already == 0)
	{
	  while (str_contain(stack, '\n') == 0)
	    {
	      my_memset_gnl(buff, 0, READ_SIZE + 1);
	      if ((size = read(fd, buff, READ_SIZE)) != 0)
		stack = my_cat(stack, buff);
	      else
		{
		  already++;
		  return (NULL);
		}
	    }
	  return (separate(&stack));
	}
    }
  return (NULL);
}
