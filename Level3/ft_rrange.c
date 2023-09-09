#include <stdlib.h>
#include <stdio.h>

int ft_abs(int nbr)
{
  if (nbr < 0)
    return (-nbr);
return (nbr);
}
int *ft_rrange(int start, int end)
{
  int *tab;
  int size = ft_abs(start - end) + 1;
  int i = 0;
  tab = (int *)malloc(sizeof(int) * size);
  if (!tab)
    return (NULL);
  if (start > end)
  {
    while (i < size)
    {
      tab[i] = end;
      end++;
      i++;
    }
  }
  else
  {
    while (i < size)
    {
      tab[i] = end;
      end--;
      i++;
    }
  }
return (tab);
}
int main()
{
    int *array = ft_rrange(0, -3);
    printf("1st element: %d\n", array[0]);
    printf("2nd element: %d\n", array[1]);
    printf("3rd element: %d\n", array[2]);
    printf("4th element: %d", array[3]);
}
