/*
** my_str_to_wordtab.c for my_str_to_wordtab in /home/mansar_e/rendu/Projets
** 
** Made by Mansart Esteban
** Login   <mansar_e@epitech.net>
** 
** Started on  Tue Jan 12 22:17:12 2016 Mansart Esteban
** Last update Tue Mar  1 16:35:00 2016 Mansart Esteban
*/

#include		"my.h"

int			count_words(char *str, char c)
{
  int			i;
  int			n;

  i = 0;
  n = 0;
  if (my_strlen(str) == 0)
    return (0);
  while (str[i] == c || str[i] == '\t')
    i++;
  while (str[i])
    {
      if (str[i] == c || str[i] == '\t')
	{
	  n++;
	  while (str[i] == c || str[i] == '\t')
	    i++;
	}
      i++;
    }
  if (str[my_strlen(str) - 1] == c)
    n--;
  return (n + 1);
}

char			*split_word(char **str, char c)
{
  int			i;
  int			len;
  char			*ret;

  i = 0;
  len = 0;
  while (**str == c || **str == '\t')
    (*str)++;
  while ((*str)[len] != c && (*str)[len] && (*str)[len] != '\t')
    len++;
  if ((ret = malloc(sizeof(char) * (len + 1))))
    {
      while (i < len)
	{
	  ret[i] = **str;
	  (*str)++;
	  i++;
	}
      while (**str == c || **str == '\t')
	(*str)++;
      ret[len] = 0;
    }
  return (ret);
}

char			**my_str_to_wordtab(char *str, char c)
{
  int			n;
  int			i;
  char			**ret;

  ret = NULL;
  i = 0;
  if (str != NULL)
    {
      n = count_words(str, c);
      if ((ret = malloc(sizeof(char *) * (n + 1))))
	{
	  while (i < n)
	    {
	      ret[i] = split_word(&str, c);
	      i++;
	    }
	  ret[i] = NULL;
	}
    }
  return (ret);
}

