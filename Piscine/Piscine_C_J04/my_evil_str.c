/*
** my_evil_str.c for my_evil_str in /home/mansar_e/Perso/Projets/epitech-projects/Piscine/Piscine_C_J04
** 
** Made by Mansart Esteban
** Login   <mansar_e@epitech.net>
** 
** Started on  Sat Jun  4 21:58:55 2016 Mansart Esteban
** Last update Sat Jun  4 22:27:24 2016 Mansart Esteban
*/

char	my_swapch(char *a, char *b)
{
  char	c;

  c = *a;
  *a = *b;
  *b = c;
}

char	*my_evil_str(char *c)
{
  int	i;
  int	n;

  i = 0;
  n = my_strlen(c);
  while (i < n / 2)
    {
      my_swapch(c + i, c + (n - i) - 1);
      i++;
    }
  return (c);
}
