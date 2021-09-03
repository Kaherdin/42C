#include <unistd.h>
#include <string.h>

void	ft_putchar(char *str) {   // the size of the buffer is not required         
	write(1, str, strlen(str)); // 2nd argument is a char*, not a char **
                               // 3rd one is the actual length of your                
                               // string, not the size of the buffer
}

int	main(void)
{	
	char	*str2;

	*(&str2) = "GeeksforGeeks";
	ft_putchar(str2); // the size of the buffer is not required
}
