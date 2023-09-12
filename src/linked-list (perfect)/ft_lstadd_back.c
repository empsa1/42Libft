/*Function created according to libft subject with the intent of helping manipulate linked-lists for future projects, this one adds a node to the last position of a stack*/

#include "../../include/libft.h"

void ft_lstadd_back(t_list **lst, t_list *node)
{
    t_list *last;
    if (lst != NULL)
        if (*lst != NULL)
        {
            last = ft_lstlast(*lst);
            last->next = node;
        }  
}