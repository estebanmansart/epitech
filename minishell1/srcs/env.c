/*
** env.c for env.c in /home/mansar_e/Perso/Projets/epitech-projects/minishell1/srcs
** 
** Made by Mansart Esteban
** Login   <mansar_e@epitech.net>
** 
** Started on  Sat Jun  4 11:20:15 2016 Mansart Esteban
** Last update Sat Jun  4 21:33:08 2016 Mansart Esteban
*/

#include		"my.h"

t_list			*get_env_in_list(char **mainenv)
{
  char			**tmp;
  t_env			*env;
  t_list		*list;

  list = NULL;
  env = NULL;
  if ((env = malloc(sizeof(t_env))))
    {
      while (*mainenv)
	{
	  tmp = my_str_to_wordtab(*mainenv, '=');
	  env->scope = tmp[0];
	  env->value = tmp[1];
	  printf("tmp1 = %s, tmp2 = %s\n", tmp[0], tmp[1]);
	  if ((list = add_elem_to_list(list, create_elem(env))) == NULL)
	    return (NULL);
	  mainenv++;
	}
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

char			*get_value(t_list *env, char *scope)
{
  t_env			*tmp;
  t_list		*begin;

  begin = env;
  while (env->next != NULL)
    {
      tmp = (t_env *)env->data;
      printf("src = %s, env = %s\n", scope, tmp->scope);
      if (my_strcmp(scope, tmp->scope) == 0)
	{
	  printf("done\n");
	  return (tmp->value);
	}
      printf("echec\n");
      env = env->next;
    }
  env = begin;
  return (NULL);
}
