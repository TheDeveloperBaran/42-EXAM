#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	main(int ac, char **av)
{
	if (ac == 4 && !av[2][1])
	{
		int nbr1 = atoi(av[1]);
		int nbr2 = atoi(av[3]);
		int res = 0;
		if (av[2][0] == '+')
		{
			res = nbr1 + nbr2;
		}
		else if (av[2][0] == '-')
		{
			res = nbr1 - nbr2;
		}
		else if (av[2][0] == '%')
		{
			res = nbr1 % nbr2;
		}
		else if (av[2][0] == '*')
		{
			res = nbr1 * nbr2;
		}
		else if (av[2][0] == '/')
		{
			res = nbr1 / nbr2;
		}
		printf("%d\n", res);
	}
	else
	{
		printf("\n");
	}
}
