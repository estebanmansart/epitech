/*
** func.c for func in /home/mansar_e/Perso/Projets/epitech-projects/minishell1/srcs
** 
** Made by Mansart Esteban
** Login   <mansar_e@epitech.net>
** 
** Started on  Sat Jun  4 20:47:09 2016 Mansart Esteban
** Last update Sat Jun  4 20:48:00 2016 Mansart Esteban
*/

#include		"my.h"

int			is_num(char *a)
{
  int			i;

  i = 0;
  while (a[i])
    {
      if (a[i] < '0' || a[i] > '9')
	return (-1);
      i++;
    }
  return (1);
}
