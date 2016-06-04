/*
** my_swap.c for my_swap in /home/mansar_e/Perso/Projets/epitech-projects/Piscine/Piscine_C_J04
** 
** Made by Mansart Esteban
** Login   <mansar_e@epitech.net>
** 
** Started on  Sat Jun  4 21:49:36 2016 Mansart Esteban
** Last update Sat Jun  4 21:54:15 2016 Mansart Esteban
*/

int	my_swap(int *a, int *b)
{
  int	tmp;

  tmp = *a;
  *a = *b;
  *b = tmp;
}
