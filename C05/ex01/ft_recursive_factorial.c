/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaciel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 18:51:45 by cmaciel-          #+#    #+#             */
/*   Updated: 2024/09/22 18:54:25 by cmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0 || nb == 1)
	{
		return (1);
	}
	return (nb = nb * ft_recursive_factorial(nb - 1));
}
/*
int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		char	*str;
		int	i;
		int	result;

		str = argv[1];
		i = 0;
		result = 0;

	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	printf("%d", ft_recursive_factorial(result));
	//printf("%d", ft_recursive_factorial(atoi(argv[1])));
	}
	return (0);
}
*/
