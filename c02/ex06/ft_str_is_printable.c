/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborst <aborst@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 18:55:36 by aborst            #+#    #+#             */
/*   Updated: 2021/09/08 01:49:53 by aborst           ###   ########.fr       */
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

int	main(void)
{	
	char	ptr;
	int		integer;

	ptr = '\041'; //octal set
	integer = 33; //decimal set
	
	printf("char Int : %d\n", ptr); // signed decimal int
	printf("char Octal : %o\n", ptr); // unsigned octal int
	printf("char Hexa : %x\n", ptr); // unsigned hexadecimal int
	printf("char Character : %c\n", ptr); // a character


	printf("int Int : %d\n", integer); // signed decimal int
	printf("int Octal : %o\n", integer); // unsigned octal int
	printf("int Hexa : %x\n", integer); // unsigned hexadecimal int
	printf("int Character : %c\n", integer); // a character

	/*  */printf("%d\n", ft_str_is_printable("ass \\3 sasas"));
	return (0);
}
