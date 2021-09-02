#include <unistd.h> //import write...
#include <stdio.h>

void ft_putchar(char str[])
{        
               //write(1, &str, 19);
               printf("%c", str);
}

int    main()
{       
    //char str2[10] = 'GeeksforGeeks';
        ft_putchar('GeeksforGeeks');
        return(0);
}