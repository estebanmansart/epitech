/*
** main.c for main in /home/mansar_e/Perso/Projets/epitech-projects/minishell1/srcs
** 
** Made by Mansart Esteban
** Login   <mansar_e@epitech.net>
** 
** Started on  Sat Jun  4 11:17:43 2016 Mansart Esteban
** Last update Sat Jun  4 21:04:50 2016 Mansart Esteban
*/

#include		"my.h"

int			my_prompt(t_list *env)
{
  my_putstr("my_sh->_ ");
  my_putstr(get_value(env, "HOME"));
  return (1);
}

int			main(int __attribute__((unused))	argc,
			     char __attribute__((unused))	**argv,
			     char				**mainenv)
{
  int			exit;
  char			**command;
  t_list		*env;

  env = NULL;
  if ((env = get_env_in_list(mainenv)) != NULL)
    {
      while (my_prompt(env) && (command = my_str_to_wordtab(gnl(0), ' ')) != NULL)
	{
	  if ((exit = my_exit(command)) >= 0)
	    return (exit);
	  else if (try_command(command) == -1)
	    my_puterrstr("Cette command n'est pas valide\n");
	}
      free_env(env);
    }
  else
    my_puterrstr("Une erreur inconnue est survenue : CODE 0X0000001\n");
  return (0);
}
