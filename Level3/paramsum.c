#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

void    putnbr(int nbr)
{
    if (nbr >= 10)
    {
        putnbr(nbr / 10);
    }
    char c = nbr % 10 + '0';
    write(1, &c, 1);
}

int main(int ac, char **av)
{
    (void)(av);
    putnbr(ac - 1);
    write(1, "\n", 1);
}
