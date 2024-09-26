/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaciel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 17:21:08 by cmaciel-          #+#    #+#             */
/*   Updated: 2024/09/16 17:42:25 by cmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
/*
int	 main(int argc, char **argv)
{
	if(argc > 1)
	{
		printf("Meu: %d", ft_strlen(argv[1]));
		//printf("\nDo Sistema: %lu", strlen(argv[1]));
	}
	return (0);
}
*/
