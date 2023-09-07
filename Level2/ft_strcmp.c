#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int	ft_strcmp(const char *str, const char *str2)
{
	int i = 0;
	while (str[i] && str2[i] && str[i] == str2[i])
	{
		i++;
	}
	if (str[i] > str2[i])
	{
		return (1);
	}
	else if (str[i] < str2[i])
	{
		return (-1);
	}
	return (0);
}

int	main()
{
	printf("my atoi: %d\n", ft_strcmp("baran", "baran"));
	printf("normal atoi: %d\n", strcmp("baran", "baran"));
}
