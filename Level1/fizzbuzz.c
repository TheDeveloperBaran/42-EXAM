#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	ft_print_numbers(int nbr)
{
	if (nbr >= 10)
	{
		ft_print_numbers(nbr / 10);
	}
	char c = nbr % 10 + '0';
	write(1, &c, 1);
}

int main()
{
	int i = 1;

	while (i <= 100)
	{
		if (i % 3 == 0)
		{
			if (i % 5 == 0)
			{
				write(1, "fizzbuzz", 8);
			}
			else
			{
				write(1, "fizz", 4);
			}
		}
		else if (i % 5 == 0)
		{
			write(1, "buzz", 4);
		}
		else
		{
			ft_print_numbers(i);
		}
		i++;
		write(1, "\n", 1);
	}	
}
