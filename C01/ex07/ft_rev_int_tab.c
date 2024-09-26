/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaciel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 10:40:43 by cmaciel-          #+#    #+#             */
/*   Updated: 2024/09/12 09:40:29 by cmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	moment;

	i = 0;
	j = size - 1;
	moment = 0;
	while (i < j)
	{
		moment = tab[i];
		tab[i] = tab[j];
		tab[j] = moment;
		i++;
		j--;
	}
}

/*int     main(void)
{
	int     tab[] = {0, 1, 2, 3, 4};
	int     size = 5;

	ft_rev_int_tab(tab, size);
	printf("%d, %d, %d, %d, %d", tab[0], tab[1], tab[2],tab[3], tab[4]);
	return (0);
}*/
