
#include <stdio.h>
#include <unistd.h>

int ft_atoi(char *str)
{
    int res = 0;
    while (*str >= '0' && *str <= '9')
    {
        res = res * 10 + (*str - '0');
        str++;
    }
    return (res);
}

void    print_hex(int nbr)
{
    if (nbr >= 16)
    {
        print_hex(nbr / 16);
    }
    char    hex[17] = "0123456789abcdef";
    write(1, &hex[nbr % 16], 1);
}

int main(int ac, char **av)
{
    if (ac == 2 && av[1][0] != '-')
    {
        print_hex(ft_atoi(av[1]));
    }
    write(1, "\n", 1);
}
