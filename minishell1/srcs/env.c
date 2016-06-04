/*
** env.c for env.c in /home/mansar_e/Perso/Projets/epitech-projects/minishell1/srcs
** 
** Made by Mansart Esteban
** Login   <mansar_e@epitech.net>
** 
** Started on  Sat Jun  4 11:20:15 2016 Mansart Esteban
** Last update Sat Jun  4 11:42:22 2016 Mansart Esteban
*/

#include		"my.h"

t_list			*get_env_in_list(char **mainenv)
{
  t_list		*list;

  list = NULL;
  while (*mainenv)
    {
      if ((list = add_elem_to_list(list, create_elem(*mainenv))) == NULL)
	return (NULL);
      mainenv++;
    }
  return (list);
}

void			free_env(t_list *env)
{
  while (env->next != NULL)
    env = env->next;
  while (env->prev->prev != NULL)
    {
      env = env->prev;
      free(env->next);
    }
  free(env);
}
