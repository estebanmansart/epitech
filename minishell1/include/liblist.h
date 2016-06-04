/*
** liblist.h for liblist.h in /home/mansar_e/library/liblist/include
** 
** Made by Mansart Esteban
** Login   <mansar_e@epitech.net>
** 
** Started on  Wed May 25 14:45:11 2016 Mansart Esteban
** Last update Fri May 27 01:56:19 2016 Mansart Esteban
*/

#ifndef			DEF_LIBLIST_H_
#define			DEF_LIBLIST_H_

#include		<stdlib.h>
#include		"libmy.h"

typedef struct		s_list
{
  int			id;
  void			*data;
  struct s_list		*next;
  struct s_list		*prev;
}			t_list;

t_list			*create_elem(void *);
t_list			*add_elem_to_list(t_list *, t_list *);

int			sizeof_list(t_list *);
void			display_list(t_list *);

t_list			*get_elem_by_id(t_list *, int);

#endif
