#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	mini_inter(char *str, char c, int len)
{
	int i = 0;
	while (str[i] && (i < len || len == -1))
	{
		if (str[i++] == c)
		{
			return (1);
		}		
	}
	return (0);
}

int	main(int ac, char **av)
{
	if (ac == 3)
	{
		int i = 0;
		while (av[1][i])
		{
			if (!mini_inter(av[1], av[1][i], i) && mini_inter(av[2], av[1][i], -1))
			{
				write(1, &av[1][i], 1);
			}
			i++;
		}
	}
	write(1, "\n", 1);
}

// len == -1 demek, eğer len -1 ise, üçüncü parametre kullanılmayacak, göz önüne alınmayacak demektir.
