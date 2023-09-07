#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	*ft_swap(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}
