/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaciel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 16:55:51 by cmaciel-          #+#    #+#             */
/*   Updated: 2024/09/18 17:41:21 by cmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>

int	ft_iterative_factorial(int nb)
{
	int	temp;

	temp = nb;
	if (nb == 0)
	{
		return (1);
	}
	else if (nb != 0 && nb >= 0)
	{
		temp = temp - 1;
		while (temp != 0)
		{
			nb = nb * temp;
			temp--;
		}
		return (nb);
	}
	return (0);
}
/*
int	main(int argc, char **argv)
{
	char	*str = argv[1];
	int	result = 0;
	int	i = 0;

	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	if(argc == 2)
	{
		printf("Meu: %d", ft_iterative_factorial(result));
		//printf("\nDo sistema: %d", ft_iterative_factorial(atoi(argv[1])));
	}
	return (0);
}
*/
