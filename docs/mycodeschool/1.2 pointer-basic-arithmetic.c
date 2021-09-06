#include <stdio.h>
//https://www.youtube.com/watch?v=X1DcpcgSUXw&list=PL2_aWCzGMAwLZp6LMUKI3cc7pgGsasm2_&index=2
int	main(void)
{
	int		a;
	int		*ptr;
	ptr = &a;    
    a = 8;
	*(ptr + 1) = 22;
	
	printf("Address of ptr is %d\n", ptr);
	printf("value at adress  ptr is %d\n", *ptr);
	printf("size of integer %d bytes\n", sizeof(int));
	printf("Address of ptr+1 is %d\n", ptr+1);
	printf("value at adress ptr+1 is %d\n", *(ptr+1));


}
