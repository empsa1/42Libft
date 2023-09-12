/*Function created according to libft subject with the intent of helping manipulate linked-lists for future projects, this one returns the last node of a stack*/

#include "../../include/libft.h"


t_list  *ft_lstlast(t_list *lst)
{
    while (lst->next != NULL)
        lst = lst->next;
    return (lst);
}