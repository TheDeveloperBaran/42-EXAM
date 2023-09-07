#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char *ft_strchr(char *str, char c)
{
	while (*str)
	{
		if (*str == c)
		{
			return (char *)str;
		}
		str++;
	}
	return (0);
}

size_t ft_strspn(char *str1, char *str2)
{
	size_t	i = 0;
	while (str1[i])
	{
		if (!ft_strchr(str2, str1[i]))
		{
			break;
		}
		i++;
	}
	return (i);
}

int main()
{
	printf("my strspn: %lu\n", ft_strspn("baran", "xcd"));
	printf("strspn: %lu", strspn("baran", "xcd"));
}
