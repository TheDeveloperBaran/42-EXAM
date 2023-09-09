#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int main(int ac, char **av)
{
  if (ac == 3)
  {
     int j = 0;
     int i = 0;
     while (av[2][j])
     {
       if (av[2][j++] == av[1][i])
       {
         i++;
         j = 0;
       }
     }
     if (!av[1][i])
     {
       ft_putchar('1');
     }
     else
     {
       ft_putchar('0');
     }
  }
  write(1, "\n", 1);
}
