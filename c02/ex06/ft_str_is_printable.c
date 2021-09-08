/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborst <aborst@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 18:55:36 by aborst            #+#    #+#             */
/*   Updated: 2021/09/08 02:06:48 by aborst           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	cond_check_printable(int c)
{
	if ((c >= 32 && c <= 126))
		return (1);
	else
		return (0);
}

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!cond_check_printable(str[i]))
		{
			return (0);
		}			
		++i;
	}
	return (1);
}

/* 
int	main(void)
{	
	char	ptr;
	int		integer;

	ptr = '\112'; //octal set
	integer = 32; //decimal set
	
	 	
	printf("char Int : %d\n", ptr); 
	printf("char Octal : %o\n", ptr); 
	printf("char Hexa : %x\n", ptr); 
	printf("char Character : %c\n", ptr);
	printf("int Int : %d\n", integer); 
	printf("int Octal : %o\n", integer); 
	printf("int Hexa : %x\n", integer); 
	printf("int Character : %c\n", integer);
	
 
	//printf("%d\n", ft_str_is_printable("ass sasas ")); //ok
	printf("%d\n", ft_str_is_printable("asa s s\01")); //ko
	return (0);
}
*/
