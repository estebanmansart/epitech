/*
** my_putstr.c for my_putstr in /home/mansar_e/Perso/Projets/epitech-projects/Piscine/Piscine_C_J04
** 
** Made by Mansart Esteban
** Login   <mansar_e@epitech.net>
** 
** Started on  Sat Jun  4 21:54:56 2016 Mansart Esteban
** Last update Sat Jun  4 21:56:05 2016 Mansart Esteban
*/

int	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    {
      write(1, &(str[i]), 1);
      i++;
    }
  return (0);
}
