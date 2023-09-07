#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>




void	last_word(char *str)
{
	int i = 0;
	int pointbegin = 0;
	int pointend = 0;
	while (str[i] == ' ' || str[i] == '\t')
	{
		i++;
	}
	while (str[i])
	{
		i++;
	}
	i--;
	pointend = i;
	while (str[i] == ' ' || str[i] == '\t')
	{
		pointend--;
		i--;
	}
	while (str[i] != ' ' && str[i] != '\t')
	{
		i--;
	}
	pointbegin = i;
	pointbegin++;
	while (pointbegin <= pointend)
	{
		write(1, &str[pointbegin], 1);
		pointbegin++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		last_word(av[1]);
	}
	write(1, "\n", 1);
}
