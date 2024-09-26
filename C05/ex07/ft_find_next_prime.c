/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaciel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 00:24:08 by cmaciel-          #+#    #+#             */
/*   Updated: 2024/09/23 00:25:36 by cmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
	{
		return (0);
	}
	while (i <= nb / i)
	{
		if (nb % i == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	x;

	x = 0;
	if (nb <= 1)
	{
		return (2);
	}
	if (ft_is_prime(nb) == 1)
	{
		return (nb);
	}
	while (x != 1)
	{
		nb++;
		x = ft_is_prime(nb);
	}
	return (nb);
}
/*
int main (void)
{
	printf("%d", ft_find_next_prime(8));
	return (0);
}
*/
