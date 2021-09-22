/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborst <aborst@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 21:38:00 by aborst            #+#    #+#             */
/*   Updated: 2021/09/09 21:51:54 by aborst           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putstr(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        ft_putchar(str[i]);
        i++;
    }
}

int ft_check(char *s, char c, int size)
{
    int i;

    i = 0;
    while (i < size)
    {
        if (s[i] == c)
            return (0);
        i++;
    }
    return (1);
}

void ft_union(char *s1, char *s2)
{
    int i;
    int j;

    i = 0;

    while (s1[i])
    {
        if (ft_check(s1, s1[i], i) == 1)
        {
            j = 0;
            while (s2[j])
            {
                if (s2[j] == s1[i])
                {
                    ft_putchar(s1[i]);
                    break;
                }
                j++;
            }
        }
        i++;
    }
}

int main(void)
{
    ft_union("padinton", "paqefwtdjetyiytjneytjoeyjnejeyj");
}
