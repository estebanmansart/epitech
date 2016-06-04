/*
** main.c for main in /home/mansar_e/Perso/Projets/epitech-projects/minishell1/srcs
** 
** Made by Mansart Esteban
** Login   <mansar_e@epitech.net>
** 
** Started on  Sat Jun  4 11:17:43 2016 Mansart Esteban
** Last update Sat Jun  4 11:45:58 2016 Mansart Esteban
*/

#include		"my.h"

int			main(int __attribute__((unused))	argc,
			     char __attribute__((unused))	**argv,
			     char				**mainenv)
{
  char			*command;
  t_list		*env;

  env = NULL;
  if ((env = get_env_in_list(mainenv)) != NULL)
    {
      while ((command = gnl(0)) != NULL)
	{
	  if (try_command(command) == -1)
	    my_puterrstr("Cette command n'est pas valide\n");
	}
      free_env(env);
    }
  else
    my_puterrstr("Une erreur inconnue est survenue : CODE 0X0000001\n");
  return (0);
}
