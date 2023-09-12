#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h> //needed for write(); and NULL CONSTANT
# include <stdlib.h> //needed for malloc(); and free();
# include <limits.h> //helps defining INT_MAX and such

# define TRUE                    0
# define FALSE                   1
# define FAILURE                 1
# define SUCCESS                 0

//||Rank 1-> libft 42 project|| Linked-list
typedef struct s_list
{
void *content;
size_t content_size;
struct s_list *next;
} t_list;

//||Self-defined|| Linked-list defined with better names for my understanding
typedef struct v0_node
{
    void *content;
    size_t content_size;
    struct v0_node *next;
} void_node;

//||Rank 2-> push_swap 42 project|| Linked-list
typedef struct i0_node
{
    int content;
    int index;
    struct i0_node *next;
} int_node;


/*"""""""""""""""""""""""""""""""""""""""""""""""""""""""""<ctype.h> library""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""*/
/*""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""*/

//checks if given char is an alphanumeric character returns 1 if yes and 0 if not
int	    ft_isalnum(int argument);

//checks if given char is an alphabetic character returns 1 if uppercase, 2 if lowercase and 0 if not
int	    ft_isalpha(int argument);

//checks if given char is an ascii character returns 1 if yes and 0 if not
int	    ft_isascii(int argument);

//checks if given char is a digit returns 1 if yes and 0 if not
int	    ft_isdigit(int argument);

//checks if given char is a printable character returns 1 if yes and 0 if not
int     ft_isprint(int argument);

//if given character is alphabetic it will convert it to lowercase and return it else will return 0
int     ft_tolower(int argument);

//if given character is alphabetic it will convert it to uppercase and return it else will return 0
int     ft_toupper(int argument);



/*"""""""""""""""""""""""""""""""""""""""""""""""""""""""""extra non-library""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""*/
/*""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""*/

//auxiliar function that returns 1 if given char is "+" returns -1 if "-" else returns 0
int             aux_signal(char c);


char            *ft_strmap(char const *s, char (*f)(char));

//converts integer to string of chars and returns the string
char            *ft_itoa(int n);


void            *ft_memalloc(size_t size);
void            ft_memdel(void **ap);
void            ft_putchar_fd(char c, int fd);
void            ft_putendl_fd(char *s, int fd);
void            ft_putnbr_fd(int n, int fd);
void            ft_putstr_fd(char *s, int fd);
void            ft_strdel(char **as);
int             ft_strequ(char const *s1, char const *s2);
void            ft_striter(char *s, void (*f)(char *));
void            ft_striteri(char *s, void (*f)(unsigned int, char *));
char            *ft_strjoin(char const *s1, char const *s2);
char            *ft_strmapi(char const *s, char (*f)(unsigned int, char));
int             ft_strnequ(char const *s1, char const *s2, size_t n);

//allocates dynamicly a new string using malloc returns the string created
char            *ft_strnew(size_t size);

//allocates 2 strings and splits given string  into 2 with the divider being c returns a pointer to the array of those 2 strings
char            **ft_strsplit(char const *s, char c);

//
char            *ft_strsub(char const *s, unsigned int start, size_t len);

//
char            *ft_strtrim(char const *s);


/*"""""""""""""""""""""""""""""""""""""""""""""""""""""""""<stdlib.h> library""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""*/
/*""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""*/

//converts string of chars into integer and returns the integer value
int             ft_atoi(const char *argument);

//converts string of chars into long integer and returns the long integer value
long int        my_atol(const char *argument);


/*"""""""""""""""""""""""""""""""""""""""""""""""""""""""""<string.h> library""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""*/
/*""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""*/
void            *ft_memchr(const void *argument, int c, size_t maxlen);
void            *ft_memcpy(void *to, const void *from, size_t numBytes);
void            *ft_memmove(void *string, int c, size_t n);
void            *ft_memset(void *jutsu, int nature, size_t size);
char            *ft_strchr(const char *str, int c);
size_t          ft_strlcat(char *dest, const char *src, size_t maxlen);
size_t          ft_strlcpy(char *dest, const char *src, size_t maxlen);

//compares argument1 with argument2 char by char until it finds a diference or until maxlen is reached returns <0 if argument2 > argument1 = 0 if equals else > 0
int             ft_strncmp(const char *argument1, const char *argument2, size_t maxlen);

//searches for c in str and returns a pointer to the place where it found c or NULL if it cant find it
char            *ft_strrchr(const char *str, int c);

//returns the amount of elements in string until it finds a null character
size_t	        ft_strlen(char *string);


/*"""""""""""""""""""""""""""""""""""""""""""""""""""""""""<strings.h> library""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""*/
/*""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""*/

void            ft_bzero(void *s, size_t n);
int             ft_memcmp(const void *str1, const void *str2, size_t n);
char            *ft_strnstr(const char *s, const char *find, size_t slen);


/*"""""""""""""""""""""""""""""""""""""""""""""""""""""""""bonus non-library""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""*/
/*""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""*/

//adds a new node to the end of the Linked-List
void            ft_lstadd_back(t_list **lst, t_list *new);

//adds a new node to the beggining of the Linked-List (new head)
void            ft_lstadd_front(t_list **lst, t_list *new);

//allocates memory and creates a new Linked-List
t_list          *ft_lstnew(void *content);

//returns the size of a Linked-List by giving its head
int             ft_lstsize(t_list *lst);

//returns a pointer to the last node of the Linked-List by giving its head
t_list          *ft_lstlast(t_list *lst);

#endif
