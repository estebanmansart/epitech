/*
** my_find_prime_sup.c for my_find_prime_sup in /home/mansar_e/Perso/Projets/epitech-projects/Piscine/Piscine_C_J05
** 
** Made by Mansart Esteban
** Login   <mansar_e@epitech.net>
** 
** Started on  Sun Jun  5 00:21:41 2016 Mansart Esteban
** Last update Sun Jun  5 00:22:41 2016 Mansart Esteban
*/

int	my_find_prime_sup(int n)
{
  while (my_is_prime(++n) == 0);
  return (n);
}
