/*
** my_factorielle_it.c for my_factorielle_it in /home/mansar_e/Perso/Projets/epitech-projects/Piscine/Piscine_C_J05
** 
** Made by Mansart Esteban
** Login   <mansar_e@epitech.net>
** 
** Started on  Sat Jun  4 23:29:33 2016 Mansart Esteban
** Last update Sat Jun  4 23:33:18 2016 Mansart Esteban
*/

int	my_factorielle_it(int nb)
{
  int	ret;

  ret = 1;
  if (nb < 0)
    return (0);
  while (nb > 1)
    {
      ret *= nb;
      nb--;
    }
  return (ret);
}
