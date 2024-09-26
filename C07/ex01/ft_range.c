/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaciel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 04:59:25 by cmaciel-          #+#    #+#             */
/*   Updated: 2024/09/23 05:02:31 by cmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*matrix;
	int	i;
	int	size;

	i = 0;
	size = max - min;
	if (min >= max)
	{
		return (NULL);
	}
	matrix = malloc(sizeof(int) * size);
	if (!matrix)
	{
		return (NULL);
	}
	while (i <= size)
	{
		matrix[i] = min;
		i++;
		min++;
	}
	return (matrix);
}
/*
int	main(void)
{
	int min = -15;
	int max = -3;
	int size = max - min;
	int i = 0;
	int *a = ft_range(min, max);

	while (i < size)
	{
		printf("%d ", a[i]);
		i++;
	}
	return (0);
}
*/
