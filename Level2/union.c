#include <unistd.h>

int mini_union(char *str, char c, int len)
{
	int i = 0;
	while (i < len)
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
		int	i = 0;
		int j = 0;

		while (av[1][i])
		{
			i++;
		}
		while (av[2][j])
		{
			av[1][i] = av[2][j];
			j++;
			i++;
		}
		i--;
		int k = 0;
		while (k <= i)
		{
			if (!mini_union(av[1], av[1][k], k))
			{
				write(1, &av[1][k], 1);
			}
			k++;
		}
	}
	write(1, "\n", 1);
	
}
