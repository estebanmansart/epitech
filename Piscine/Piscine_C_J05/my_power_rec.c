/*
** my_power_rec.c for my_power_rec in /home/mansar_e/Perso/Projets/epitech-projects/Piscine/Piscine_C_J05
** 
** Made by Mansart Esteban
** Login   <mansar_e@epitech.net>
** 
** Started on  Sat Jun  4 23:49:00 2016 Mansart Esteban
** Last update Sat Jun  4 23:51:27 2016 Mansart Esteban
*/

int	my_power_rec(int n, int p)
{
  return ((p <= 0) ? (1) : (n * my_power_rec(n, p - 1)));
}

/* int	my_power_rec(int n, int p) */
/* { */
/*   if (p <= 0) */
/*     return (1); */
/*   return (n * my_power_rec(n, p - 1)); */
/* } */
