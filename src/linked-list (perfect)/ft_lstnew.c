/*Function created according to libft subject with the intent of helping manipulate linked-lists for future projects, this one creates a new header node of a linked-list*/

#include "../../include/libft.h"

t_list *ft_lstnew(void *content)
{
    t_list *node;

    if (!(node = (t_list*)malloc(sizeof(*node))))
		  return (NULL);
    node->content = content;
    node->next = NULL;
    return (node);
}

