/*
** my_sort_int_tab.c for my_sort_int_tab in /home/mansar_e/Perso/Projets/epitech-projects/Piscine/Piscine_C_J04
** 
** Made by Mansart Esteban
** Login   <mansar_e@epitech.net>
** 
** Started on  Sat Jun  4 22:58:04 2016 Mansart Esteban
** Last update Sat Jun  4 23:10:09 2016 Mansart Esteban
*/

void	disp_tab(int *tab, int size)
{
  int	i;

  i = 0;
  while (i < size)
    {
      printf("%d\n", tab[i]);
      i++;
    }
}

void	my_sort_int_tab(int *tab, int size)
{
  int	i;
  int	isok;

  isok = 0;
  while (isok == 0)
    {
      isok = 1;
      i = -1;
      while (++i < size)
	if (tab[i + 1] && (tab[i + 1] < tab[i]))
	  {
	    my_swap(tab + i + 1, tab + i);
	    isok = 0;
	  }
    }
}
