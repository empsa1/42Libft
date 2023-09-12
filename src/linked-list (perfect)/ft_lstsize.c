/*Function created according to libft subject with the intent of helping manipulate linked-lists for future projects, this one returns the size in nodes of a stack*/

#include "../../include/libft.h"

int ft_lstsize(t_list *lst)
{
    int counter;

    counter = 0;
    while (lst->next != NULL)
    {
        lst = lst->next;
        counter++;
    }
    return (counter);
}