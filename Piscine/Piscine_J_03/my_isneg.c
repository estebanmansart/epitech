/*
** my_isneg.c for my_isneg in /home/mansar_e/Perso/Projets/epitech-projects/Piscine/Piscine_J_03
** 
** Made by Mansart Esteban
** Login   <mansar_e@epitech.net>
** 
** Started on  Fri Jun  3 16:38:53 2016 Mansart Esteban
** Last update Fri Jun  3 16:51:35 2016 Mansart Esteban
*/

/*
** Une ternaire est un façon simple de réaliser une action en fonction d'un test :
** if (n < 0)
**   {
**     write(1, "N", 1);
**   }
** else
**   {
**     write(1, "P", 1);
**   }
** Devient :
** write(1, (n < 0) ? ("N") : ("P"));
** (test) ? (action si vrai) : (action si faux)
*/

int	my_isneg(int n)
{
  return (write(1, (n < 0) ? ("N") : ("P"), 1));
}
