/*
** my_factorielle_rec.c for my_factorielle_rec in /home/mansar_e/Perso/Projets/epitech-projects/Piscine/Piscine_C_J05
** 
** Made by Mansart Esteban
** Login   <mansar_e@epitech.net>
** 
** Started on  Sat Jun  4 23:34:36 2016 Mansart Esteban
** Last update Sat Jun  4 23:40:25 2016 Mansart Esteban
*/

int	my_factorielle_rec(int n)
{
  return ((n < 0) ? (0) : ((n < 2) ? (1) : (n * my_factorielle_rec(n - 1))));
}

/* int	my_factorielle_rec(int nb) */
/* { */
/*   if (nb < 0) */
/*     return (0); */
/*   else if (nb <= 1) */
/*     return (1); */
/*   else */
/*     return (nb * my_factorielle_rec(nb - 1)); */
/* } */

