/*
** my.h for my in /home/mansar_e/Perso/Projets/epitech-projects/minishell1/include
** 
** Made by Mansart Esteban
** Login   <mansar_e@epitech.net>
** 
** Started on  Sat Jun  4 11:17:03 2016 Mansart Esteban
** Last update Sat Jun  4 21:04:26 2016 Mansart Esteban
*/

#ifndef		DEF_MY_H_
#define		DEF_MY_H_

#include	<stdlib.h>
#include	"libmy.h"
#include	"liblist.h"
#include	"gnl.h"

typedef struct	s_env
{
  char		*scope;
  char		*value;
}		t_env;

/*env section*/
t_list		*get_env_in_list(char **);
void		free_env(t_list *);
char		*get_value(t_list *, char *);

/*command section*/
int		try_command(char **);

/*builtins section*/
int		my_exit(char **);

/*func section*/
int		is_num(char *);
char		**my_str_to_wordtab(char *, char);

#endif
