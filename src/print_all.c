/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_all.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hulefevr <hulefevr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 19:17:27 by hulefevr          #+#    #+#             */
/*   Updated: 2024/03/31 19:52:14 by hulefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

void	print_all(char **dico, int i, int j)
{
	while (ft_isprint(dico[i][j]) == 0 || dico[i][j] == ':')
		j++;
	while (dico[i][j] != '\0')
	{
		ft_putchar(dico[i][j]);
		j++;
	}
}

int	powerlen(int power, char *dico)
{
	int	i;

	i = 0;
	while (dico[i] != ' ')
		i++;
	if (i == power + 1)
		return (1);
	return (0);
}

void	ft_print_power(int power, char **dico)
{
	int	i;
	int	j;

	i = 0;
	while (dico[i])
	{
		if (powerlen(power, dico[i]) == 1)
			print_all(dico, i, power);
		i++;
	}
}
