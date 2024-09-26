/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaciel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 16:53:13 by cmaciel-          #+#    #+#             */
/*   Updated: 2024/09/09 18:12:54 by cmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	c;

	c = *a;
	*a = c / *b;
	*b = c % *b;
}

/*int 	main(void)
{
	int     nbrA;
        int     nbrB;

        nbrA = 10;
        nbrB = 3;

	ft_ultimate_div_mod(&nbrA, &nbrB);
	printf("%d %d", nbrA, nbrB);	
	return (0);
}*/
