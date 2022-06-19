
#ifndef FT_LIST
#define FT_LIST

typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;

#endif

#include "ft_list.h"

void    ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	t_list *list_ptr;

	if (begin_list == 0)
		return ;
	
	list_ptr = begin_list;
	while (list_ptr)
	{
		(*f)(list_ptr->data);
		list_ptr = list_ptr->next;
	}
}
