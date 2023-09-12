/*Function created according to libft subject with the intent of helping manipulate linked-lists for future projects, this one adds a node to the first position of a stack*/

#include "../../include/libft.h"

void ft_lstadd_front(t_list **lst, t_list *new)
{
    if (lst)
    {
        if (*lst)
        {
            new->next = *lst;
            *lst = new;
        }
    }
}