#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

size_t ft_strcspn(const char *str, const char *str2)
{
	int i = 0;
	int j = 0;
	while (str[i])
	{
		while (str2[j])
		{
			if (str2[j] == str[i])
			{
				printf("i: %d\n", i);
				return (i);
			}
			j++;
		}
		j = 0;
		i++; 
	}
	printf("i: %d\n", i);
	return (i);
}

int	main()
{
	printf("my atoi: %ld\n", ft_strcspn("baran", "nar"));
	printf("normal atoi: %ld\n", strcspn("baran", "nar"));
}
