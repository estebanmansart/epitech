/*
** builtin.c for builtin in /home/mansar_e/Perso/Projets/epitech-projects/minishell1/srcs
** 
** Made by Mansart Esteban
** Login   <mansar_e@epitech.net>
** 
** Started on  Sat Jun  4 20:44:07 2016 Mansart Esteban
** Last update Sat Jun  4 20:51:29 2016 Mansart Esteban
*/

#include		"my.h"

int			my_exit(char **command)
{
  if (my_strcmp("exit", command[0]) == 0)
    {
      if (command[1] != NULL)
	{
	  if (is_num(command[1]) == 1)
	    return (my_getnbr(command[1]));
	  else
	    return (-1);
	}
      else
	return (0);
    }
  return (-2);
}
