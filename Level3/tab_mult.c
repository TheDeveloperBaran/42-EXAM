#include <stdio.h>
#include <unistd.h>

int ft_atoi(char *str)
{
    int res = 0;
    if (*str == '0')
    {
        return (0);
    }
    while (*str >= '0' && *str <= '9')
    {
        res = res * 10 + (*str - '0');
        str++;
    }
    return (res);
}

void    putnumbr(int nbr)
{
    if (nbr >= 10)
        putnumbr(nbr / 10);
    char c = nbr % 10 + '0';
    write(1, &c, 1);
}

int main(int ac, char **av)
{
    if (ac == 2 && av[1][0] != '-')
    {
        int i = 1;
        int number = ft_atoi(av[1]);
        while (i <= 9)
        {
            putnumbr(i);
            write(1, " x  ", 3);
            putnumbr(number);
            write(1, " =  ", 3);
            putnumbr(i * number);
            write(1, "\n", 1);
            i++;
        }
    }
    else
    {
    write(1, "\n", 1);
        
    }
}
