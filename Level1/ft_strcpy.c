#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char *ft_strcpy(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}
/*
normally this output in strcpy, results with "zsh./illegal hardware instruction" exception. but in this ft_strcpy user-defined function, it fixed.
int	main()
{
	char	b[] = "Baran";
	char	d[] = "Batuhan";
	printf("strcpy: %s\n", ft_strcpy(b, d));
	printf("after strcpy, b: %s\n", b);
	printf("after strcpy, d: %s\n", d);
}
*/
