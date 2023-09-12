#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main(int ac, char **av)
{
	if (ac > 1)
	{
		int i = 0;
		int start;
		int end;
		int initstart;
		int initend;
		int flag = 0;
		while (av[1][i] == ' ' || av[1][i] == '\t')
		{
			i++;
		}
		initstart = i;
		while (av[1][i] && av[1][i] != ' ' && av[1][i] != '\t')
		{
			i++;
		}
		initend = i - 1;
		while (av[1][i])
		{
			while ((av[1][i] == ' ' || av[1][i] == '\t'))
			{
				i++;
			}
			start = i;
			while (av[1][i] && av[1][i] != ' ' && av[1][i] != '\t')
			{
				i++;
			}
			end = i - 1;
			while (start <= end)
			{
				write(1, &av[1][start], 1);
				start++;
			}
			if ((av[1][i] == ' ' || av[1][i] == '\t'))
			{
			    write(1, " ", 1);
			}
		}
		while (initstart <= initend)
		{
		    if (av[1][i - 1] != ' ')
		    {
		        write(1, " ", 1);
		    }
		    i--;
		    while (av[1][i] && av[1][i] != ' ' && av[1][i] != '\t')
		    {
		        i--;
		    }
		    i++;
			write(1, &av[1][initstart], 1);
			initstart++;
		}
	}
	write(1, "\n", 1);
}
