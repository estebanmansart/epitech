/*
** my_power_it.c for my_power_it in /home/mansar_e/Perso/Projets/epitech-projects/Piscine/Piscine_C_J05
** 
** Made by Mansart Esteban
** Login   <mansar_e@epitech.net>
** 
** Started on  Sat Jun  4 23:41:13 2016 Mansart Esteban
** Last update Sat Jun  4 23:47:53 2016 Mansart Esteban
*/

int	my_power_it(int n, int p)
{
  int	ret;

  ret = 1;
  while (p-- > 0)
    ret *= n;
  return (ret);
}
