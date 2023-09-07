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

char *ft_strdup(char *src)
{
	int len = ft_strlen(src);
	int i = 0;
	char *dst = malloc(sizeof(char) * len + 1);
	if (!dst)
	{
		return (NULL);
	}
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

int	main()
{
	printf("my atoi: %s\n", ft_strdup("baran"));
	printf("normal atoi: %s\n", strdup("baran"));

}
