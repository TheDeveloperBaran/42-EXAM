#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 3)
	{
		int i = 0;
		int j = 0;
			while (av[2][j])
			{
				if (av[2][j++] == av[1][i])
				{
					i++;
				}
			}
			printf("j: %d\n", j);
			printf("i: %d\n", i);
			if (!av[1][i])
			{
				ft_putstr(av[1]);
			}
		}
	write(1, "\n", 1);
}
