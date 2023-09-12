/*Library: The strchr() function is defnied in <string.h> header file*/
/*Description: "strchr() searches for the last occurrence of the character c in the string pointed to by the argument str."*/
/*Return Value: This function returns a pointer to the matching byte or NULL if the character does not occur in the given memory area.*/
/*Source: https://stackoverflow.com/questions/9410/how-do-you-pass-a-function-as-a-parameter-in-c*/ 

#include "../../include/libft.h"

void ft_striter(char *s, void (*f)(char *))
{
    while (*s++ != '\0')
        (*f)(s);
}