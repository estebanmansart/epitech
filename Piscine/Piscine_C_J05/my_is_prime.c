/*
** my_is_prime.c for my_is_prime.c in /home/mansar_e/Perso/Projets/epitech-projects/Piscine/Piscine_C_J05
** 
** Made by Mansart Esteban
** Login   <mansar_e@epitech.net>
** 
** Started on  Sat Jun  4 23:57:15 2016 Mansart Esteban
** Last update Sun Jun  5 00:19:41 2016 Mansart Esteban
*/

int	my_is_prime(int n)
{
  int	i;

  if (n % 2 == 0 && n != 2)
    return (0);
  i = 2;
  while (i < n / 2)
    {
      if (n % i == 0)
	return (0);
      i++;
    }
  return (1);
}
