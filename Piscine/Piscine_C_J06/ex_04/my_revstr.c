/*
** my_revstr.c for my_revstr in /home/mansar_e/Perso/Projets/epitech-projects/Piscine/Piscine_C_J06/ex_04
** 
** Made by Mansart Esteban
** Login   <mansar_e@epitech.net>
** 
** Started on  Sun Jun  5 15:40:12 2016 Mansart Esteban
** Last update Mon Jun  6 09:18:07 2016 Mansart Esteban
*/

int	my_strlen(char *a)
{
  int	i;

  i = 0;
  while (a[i])
    i++;
  return (i);
}

void	my_swapch(char *a, char *b)
{
  char	c;

  c = *a;
  *a = *b;
  *b = c;
}

char	*my_revstr(char *a)
{
  int	w;
  int	i;

  i = 0;
  w = my_strlen(a);
  while (i < w / 2)
    {
      my_swapch(a + i, a + w - 1 - i);
      i++;
    }
  return (a);
}
