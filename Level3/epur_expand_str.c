#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int ft_strlen(char *str)
{
	int i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int main(int ac, char **av)
{
	if (ac == 2)
	{
		int i = 0;
		int len = ft_strlen(av[1]);
		len--;
		int counter = len;
		while (av[1][counter] == ' ' || av[1][counter] == '\t')
		{
			counter--;
		}
		while (av[1][i] == ' ' || av[1][i] == '\t')
		{
			i++;
		}
		while (av[1][i] && i <= counter)
		{
			if (av[1][i] == ' ')
			{
				// for expand_str == write(1, "   ", 3);
				// for epur_str == write(1, " ", 1);
			}
			while (av[1][i] == ' ' || av[1][i] == '\t')
			{
				i++;
			}
			write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
