/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaciel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 10:55:13 by cmaciel-          #+#    #+#             */
/*   Updated: 2024/09/11 12:47:07 by cmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
void	ft_sort_int_tab(int *tab, int size)
{
	int	moment;
	int	i;

	i = 0;
	moment = 0;
	while (i < size - 1)
	{
		if (tab[i] > tab[i + 1])
		{
			moment = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = moment;
			i = 0;
		}
		else
		{
			i++;
		}
	}
}

/*int	main(void)
{
	int     tab[] = {7, 3, 5, 9, 7};
	int     size = 5;
	ft_sort_int_tab(tab, size);
	printf("%d, %d, %d, %d, %d", tab[0], tab[1], tab[2], tab[3], tab[4]);
	return (0);
}*/
