/*
** my_aff_comb.c for my_aff_comb in /home/mansar_e/Perso/Projets/epitech-projects/Piscine/Piscine_J_03
** 
** Made by Mansart Esteban
** Login   <mansar_e@epitech.net>
** 
** Started on  Fri Jun  3 16:52:13 2016 Mansart Esteban
** Last update Fri Jun  3 17:01:04 2016 Mansart Esteban
*/

void	put_nbr_3_digit(int a, int b, int c)
{
  a += 48;
  b += 48;
  c += 48;
  write(1, &(a), 1);
  write(1, &(b), 1);
  write(1, &(c), 1);
}

int	my_aff_comb()
{
  int	i;
  int	j;
  int	k;

  i = -1;
  while (++i <= 9)
    {
      j = i;
      while (++j <= 9)
	{
	  k = j;
	  while (++k <= 9)
	    {
	      if (i != 0 || j != 1 || k != 2)
		write(1, " ", 1);
	      put_nbr_3_digit(i, j, k);
	    }
	}
    }
  return (0);
}
