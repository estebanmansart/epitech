/*
** my_square_root.c for my_square_root in /home/mansar_e/Perso/Projets/epitech-projects/Piscine/Piscine_C_J05
** 
** Made by Mansart Esteban
** Login   <mansar_e@epitech.net>
** 
** Started on  Sat Jun  4 23:52:18 2016 Mansart Esteban
** Last update Sun Jun  5 00:17:46 2016 Mansart Esteban
*/

int	my_square_root(int n)
{
  int	i;

  i = 0;
  while (i < n / 2 + 1)
    {
      if (my_power_rec(i, 2) == n)
	return (i);
      i++;
    }
  return (0);
}
