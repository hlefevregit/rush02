/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_all.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hulefevr <hulefevr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 19:17:27 by hulefevr          #+#    #+#             */
/*   Updated: 2024/03/31 19:28:18 by hulefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

void	print_all(char **dico, int i, int j)
{
	j = 2;
	while (ft_isprint(dico[i][j]) == 0 || dico[i][j] == ':')
		j++;
	while (dico[i][j] != '\0')
	{
		ft_putchar(dico[i][j]);
		j++;
	}
}

int	powerlen(int power, char **dico)
{
	int	i;
	int	j;

	i = 0;
	while (dico[i])
	{
		j = 0;
		while (dico[i][j] != ' ')
			j++;
		if (j == power + 1)
			return (1);
		i++;
	}
	return (0);
}

void	ft_print_power(int power, char **dico)
{
	int	i;
	int	j;

	i = 0;
	while (dico[i])
	{
		if (powerlen(power, dico) == 1)
		{
			print_all(dico, i, j);
		}
		i++;
	}
}
