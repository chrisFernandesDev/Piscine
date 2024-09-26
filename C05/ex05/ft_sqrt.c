/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaciel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 00:13:25 by cmaciel-          #+#    #+#             */
/*   Updated: 2024/09/23 00:16:59 by cmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>

int	ft_sqrt(int nb)
{
	int	i;
	int	x;

	i = 1;
	x = 0;
	while (nb > 0)
	{
		nb = nb - i;
		i = i + 2;
		x++;
	}
	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0)
	{
		return (x);
	}
	return (0);
}
/*
int	main (int argc, char *argv[])
{
	if (argc == 2)
	{
		printf("%d", ft_sqrt(atoi(argv[1])));
	}
	else
	{
		printf("\n");
		return (0);
	}
}
*/
