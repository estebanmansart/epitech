/*
** my_strlen.c for my_strlen in /home/mansar_e/Perso/Projets/epitech-projects/Piscine/Piscine_C_J04
** 
** Made by Mansart Esteban
** Login   <mansar_e@epitech.net>
** 
** Started on  Sat Jun  4 21:57:22 2016 Mansart Esteban
** Last update Sat Jun  4 21:57:48 2016 Mansart Esteban
*/

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    i++;
  return (i);
}
