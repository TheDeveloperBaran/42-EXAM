typedef struct s_list t_list;

struct s_list
{
	int     data;
	t_list  *next;
};


int cmp(int a, int b)
{
   return (a <= b);
}

#include <stdlib.h>
#include <stdio.h>

t_list	*sort_list(t_list *lst, int (*cmp)(int, int))
{
	int	swap;
	t_list	*tmp;

	tmp = lst;
	while(lst->next != NULL)
	{
		if (((*cmp)(lst->data, lst->next->data)) == 0)
		{
			swap = lst->data;
			lst->data = lst->next->data;
			lst->next->data = swap;
			lst = tmp; // ilk değer tutuluyor
		}
		else
			lst = lst->next;
	}
	lst = tmp; // sonraki değerler, liste nodelarını tamamlıyor.
	return (lst);
}

int main()
{
    t_list *x;
    t_list *y;
    
    x = malloc(1000);
    y = malloc(1000);
    x->data = 30;
    x->next = malloc(1000);
    x->next->data = 10;
    x->next->next = malloc(1000);
    x->next->next->data = 20;
    x->next->next->next = malloc(1000);
    x->next->next->next->data = 60;
    x->next->next->next->next = malloc(1000);
    x->next->next->next->next->data = 40;
    x->next->next->next->next->next = NULL;
    printf("1st element: %d\n", x->data);
    printf("1st element: %d\n", x->next->data);
    printf("1st element: %d\n", x->next->next->data);
    printf("1st element: %d\n", x->next->next->next->data);
    printf("1st element: %d\n", x->next->next->next->next->data);
    
    printf("\n");
    x = sort_list(x, &cmp);
     printf("1st element: %d\n", x->data);
    printf("1st element: %d\n", x->next->data);
    printf("1st element: %d\n", x->next->next->data);
        printf("1st element: %d\n", x->next->next->next->data);
    printf("1st element: %d\n", x->next->next->next->next->data);
    printf("\n");
}
