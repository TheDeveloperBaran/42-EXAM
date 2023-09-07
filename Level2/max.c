#include <unistd.h>
#include <stdio.h>

int	max(int *tab, unsigned int len)
{
	if (len == 0)
	{
		return (0);
	}
	unsigned int i = 0;
	int max_val = tab[0];
	while (i < len)
	{
		if (max_val < tab[i])
		{
			max_val = tab[i];
		}
		i++;
	}
	return (max_val);
}

int	main()
{
	int array[] = {121,3222,43,-5,60,232};
	printf("max: %d", max(array, 6));
}
