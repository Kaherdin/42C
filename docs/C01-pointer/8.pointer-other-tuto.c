#include <stdio.h>

void	ft_pointer(void)
{
	int x = 7;
	printf("x is %d\n", x);

	x = 14;
	printf("x is now %d\n", x);

	int	*ptr = &x;
	printf("the address of ptr is %p\n", ptr);

	printf("the value of ptr is %d\n", *ptr);

	*ptr = 21; //Change the value of x

	printf("the value of ptr is now %d and x is: %d \n ", *ptr, x);
}

void	ft_ptr_array(void)
{
	int numbers[5];
	int *ptr2 = numbers; //&numbers[0]
	int	v = 2;

	//while(ptr2 != '\0')
	while(ptr2<&numbers[5])
	{
		*ptr2 = v;
		v = v * 2;
		ptr2++;
	}

	int i;

	i = 0;

	while(i<5)
	{
		printf("%d\n", numbers[i]);
		i++;
	}
}

 
int	main(void)
{
	ft_pointer();
	ft_ptr_array();
	return(0);
 }