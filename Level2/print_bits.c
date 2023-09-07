#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	print_bits(unsigned char octet)
{
	
	for (int i = 7; i >= 0; i--)
	{
		if ((octet >> i & 1))
		{
			write(1, "1", 1);
		}
		else
		{
			write(1, "0", 1);
		}
	}
}

int	main()
{
	print_bits(21);
}
