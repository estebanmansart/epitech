/*
** my_getnbr.c for my_getnbr in /home/mansar_e/Perso/Projets/epitech-projects/Piscine/Piscine_C_J04
** 
** Made by Mansart Esteban
** Login   <mansar_e@epitech.net>
** 
** Started on  Sat Jun  4 22:35:27 2016 Mansart Esteban
** Last update Sat Jun  4 22:56:37 2016 Mansart Esteban
*/

int	is_num(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    {
      if ((str[i] < '0' || str[i] > '9') && str[i] != '+' && str[i] != '-')
	return (-1);
      i++;
    }
  return (1);
}

int	my_getnbr(char *str)
{
  int	res;
  int	neg;

  res = 0;
  neg = 1;
  if (is_num(str) == -1)
    return (0);
  while (*str && (*str == '-' || *str == '+'))
    {
      if (*str == '-')
	neg = -neg;
      str++;
    }
  while (*str && (*str >= '0' && *str <= '9'))
    {
      res = res * 10 + (*str - '0');
      str++;
    }
  return (res * neg);
}
