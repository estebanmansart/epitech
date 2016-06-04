/*
** libmy.h for myh in /home/mansar_e/library/libmy/include
** 
** Made by Mansart Esteban
** Login   <mansar_e@epitech.net>
** 
** Started on  Wed May 25 15:03:45 2016 Mansart Esteban
** Last update Sat Jun  4 11:25:16 2016 Mansart Esteban
*/

#ifndef			DEF_LIBMY_H_
#define			DEF_LIBMY_H_

#include		<unistd.h>
#include		<stdlib.h>

int			my_putchar(char);
int			my_strlen(char *);
int			my_putstr(char *);
int			my_puterrstr(char *);
int			my_putnbr(int);
int			my_getnbr(char *);
int			my_strcmp(char *, char *);
int			my_strncmp(char *, char *, int);
char			*my_strdup(char *);

#endif
