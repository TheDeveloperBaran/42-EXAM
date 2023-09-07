#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strrev(char *str)
{
	int	i = 0;
	int len = ft_strlen(str);
	char temp;
	while (i < len / 2)
	{
		temp = str[i];
		str[i] = str[len - 1 - i];
		str[len - 1 - i] = temp;
		i++;
	}
	return (str);
}

int	main()
{	
	char baran[] = "bARAN";
	printf("normal: %s\n", baran);
	printf("rev: %s\n", ft_strrev(baran));
}
