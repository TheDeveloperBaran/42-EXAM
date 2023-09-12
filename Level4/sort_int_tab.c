#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	sort_int_tab(int *tab, unsigned int size)
{
	if (size == 0)
	{
		return ;
	}
	unsigned int i = 0;
	while (i < size - 1)
	{
		if (tab[i] > tab[i + 1])
		{
		    int temp;
			temp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = temp;
			i = 0;
		}
		else
		{
			i++;
		}
	}
}

int main()
{
    int array[] = {4, 6, 1, 8, 3};
    int i = 0;
    printf("before sorting : array[%d]: %d\n", i++, array[0]);
    printf("before sorting : array[%d]: %d\n", i++, array[1]);
    printf("before sorting : array[%d]: %d\n", i++, array[2]);
    printf("before sorting : array[%d]: %d\n", i++, array[3]);
    printf("before sorting : array[%d]: %d\n", i++, array[4]);
    sort_int_tab(array, 5);
    i = 0;
    printf("\n");
    printf("after sorting : array[%d]: %d\n", i++, array[0]);
    printf("after sorting : array[%d]: %d\n", i++, array[1]);
    printf("after sorting : array[%d]: %d\n", i++, array[2]);
    printf("after sorting : array[%d]: %d\n", i++, array[3]);
    printf("after sorting : array[%d]: %d\n", i++, array[4]);
}
