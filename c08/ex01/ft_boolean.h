#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H
# include <unistd.h>
# ifndef EVEN
#  define EVEN(nbr) (nbr % 2 == 0)
# endif
# define VARI  "X a une valeur de %d et y est une string \n",
# define EVEN_MSG "I have a pair number of arguments."
# define ODD_MSG "I have an impair number of arguments."
# define TRUE 1
# define FALSE 0
# define SUCCESS 0
typedef int		t_bool;
#endif


