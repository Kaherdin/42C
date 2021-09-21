/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborst <aborst@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 18:52:08 by aborst            #+#    #+#             */
/*   Updated: 2021/09/21 18:52:18 by aborst           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H

# define FT_BOOLEAN_H
# include <unistd.h>

# define SUCCESS 0

# define FALSE	0
# define TRUE	1

# define EVEN_MSG "j'ai un nombre pair d'arguments.\n"
# define ODD_MSG "j'ai un nombre impair d'arguments.\n"

typedef int	t_bool;

# define EVEN(nbr) (nbr % 2 == 0)

#endif