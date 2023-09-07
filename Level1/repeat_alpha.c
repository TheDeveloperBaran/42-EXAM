#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	ft_putchar_n(char c, int i)
{
	while (i > 0)
	{
		write(1, &c, 1);
		--i;
	}
}

void	repeat_alpha(char *str)
{
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
		{
			ft_putchar_n(*str, *str + 1 - 'a');
		}
		else if (*str >= 'A' && *str <= 'Z')
		{
			ft_putchar_n(*str, *str + 1 - 'A');
		}
		else
		{
			write(1, str, 1);
		}
		str++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		repeat_alpha(av[1]);
	}
	write(1, "\n", 1);
}
