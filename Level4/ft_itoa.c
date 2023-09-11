#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

int	digit_count(int nbr)
{
	int len = 0;
	if (nbr < 0)
	{
		len++;
	}
	while (nbr != 0)
	{
		len++;
		nbr /= 10;
	}
	return (len);
}

int ft_abs(int nbr)
{
	if (nbr < 0)
		return (-nbr);
	return (nbr);
}

char	*ft_itoa(int nbr)
{
	char *ftitoa;
	int lenn;

	lenn = digit_count(nbr);
	ftitoa = (char *)malloc(sizeof(char) * lenn + 1);
	ftitoa[lenn] = '\0';
	if (nbr < 0)
	{
		ftitoa[0] = '-';
	}
	else if (nbr == 0)
	{
		ftitoa[0] = '0';
	}
	while (nbr != 0)
	{
		--lenn;
		ftitoa[lenn] = ft_abs(nbr % 10) + '0';
		nbr /= 10; 
	}
	return ftitoa;
}

