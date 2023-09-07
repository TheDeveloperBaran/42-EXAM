#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int is_power_of_two(int nbr)
{
	if (nbr <= 0)
	{
		return (0);
	}
	while (nbr > 1)
	{
		if (nbr % 2 == 0)
		{
			nbr /= 2;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}

int	main()
{
	printf("isPowerOfTwo(): %d", is_power_of_two(8));
}
