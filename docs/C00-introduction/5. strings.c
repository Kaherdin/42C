
#include <unistd.h>
#include <string.h>
#include <stdio.h>

//From https://www.geeksforgeeks.org/strings-in-c-2/

void	print_str_ptr(char *str) {   // the size of the buffer is not required         
	write(1, str, strlen(str)); // 2nd argument is a char*, not a char **
                               // 3rd one is the actual length of your  string, not the size of the buffer
}

void print_str_array(char str[])
{
    printf("\nString is : %s",str);
}

int	main(void)
{	
	char	*str_ptr;

	*(&str_ptr) = "Pointer of any size";
	print_str_ptr(str_ptr); // the size of the buffer is not required

    char str_array[] = "Aurelien Borst";
    print_str_array(str_array);
}
