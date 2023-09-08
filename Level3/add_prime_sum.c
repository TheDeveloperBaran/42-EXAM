#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_atoi(char *str)
{
	int res = 0;
	while (*str)
	{
		res = res * 10 + (*str - 48);
		str++;
	}
	return (res);
}

void	ft_putnbr(int nbr)
{
	if (nbr >= 10)
	{
		ft_putnbr(nbr / 10);
	}
	char c = nbr % 10 + '0';
	write(1, &c, 1);
}

int	is_prime(int nbr)
{
	if (nbr <= 0)
	{
		return (0);
	}
	int i = 1;

	while (nbr > ++i)
	{
		if (nbr % i == 0)
		{
			return (0);
		}
	}
	return (1);
}

int	add_prime_sum(int nbr)
{
	int sum = 0;
	int i = 2;
	while (nbr >= i)
	{
		if (is_prime(i) == 1)
		{
			sum += i;
		}
		i++;
	}
	return (sum);
}

int	main(int ac, char **av)
{
	int n = 0;
	if (ac == 2 && (ft_atoi(av[1]) > 0))
	{
		n = ft_atoi(av[1]);
		ft_putnbr(add_prime_sum(n));
	}
	else
	{
		ft_putnbr(0);
	}
	write(1, "\n", 1);
}
