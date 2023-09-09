#include <stdlib.h>

int ft_abs(int nbr)
{
  if (nbr < 0)
    return (-nbr);
return (nbr);
}

int *ft_range(int start, int end)
{
  int *tab;
  int size;
  int i = 0;

  size = ft_abs(start - end) + 1;
  tab = (int *)malloc(sizeof(int) * size);
  if (!tab)
    return (NULL);
  if (start < end)
  {
    while (i < size)
    {
      tab[i] = start;
      start++;
      i++;
    }
  }
  else
  {
    while (i < size)
    {
      start[i] = start;
      start--;
      i++;
    }
  }
return (tab);
}
