/*
** main.c for main in /home/mansar_e/Perso/Projets_C/epitech
** 
** Made by Mansart Esteban
** Login   <mansar_e@epitech.net>
** 
** Started on  Fri May 27 15:40:23 2016 Mansart Esteban
** Last update Fri May 27 15:48:21 2016 Mansart Esteban
*/

#include	<stdio.h>
#include	"gnl.h"

int		main(void)
{
  char		*tmp;

  while ((tmp = gnl(0)))
    {
      printf("%s\n", tmp);
      free(tmp);
    }
  return (0);
}
