#include <unistd.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	int	i;

	printf("argc : %d\n", argc);
	i = 0;
	//while(argv[i])
	while (i < argc)
	{	
		printf("argv[i] %s\n", argv[i]);
		i++;
	}
}
