/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1.processing-example.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborst <aborst@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 21:47:40 by aborst            #+#    #+#             */
/*   Updated: 2021/09/14 22:46:54 by aborst           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_putchar.h"
#include "ft_putchar.h"
#include <stdio.h>

#define LOL "mdr\n"
#define POUIC LOL

#define variable(x, y)  "X a une valeur de %d et y est une string de %s\n", x, y
#define nb 15 //OU : gcc -Wall -Wextra -Werror -Dnb=10 && ./a.out

//cpp file.c
int main(void)
{
    printf(POUIC);
    printf(LOL);
    printf(variable(42, "Salut les Muscle"));
    //ft_putchar('C');
 
    //typedef int * int_p;
    
    //int_p   a; 
    //int_p   b;
    //int z;


    #if nb < 10
        printf("petit");
    #elif nb == 10
        printf("10");
    #else
        printf("grand");
    #endif
}