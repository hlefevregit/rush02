/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_nb.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hulefevr <hulefevr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 13:48:11 by hlefevre          #+#    #+#             */
/*   Updated: 2024/03/31 19:26:49 by hulefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

void	print_first_n(char nb, char **dico)
{
	int	i;
	int	j;

	i = 0;
	while (dico[i])
	{
		if (dico[i][0] == nb)
		{
			print_all(dico, i, j);
			break ;
		}
		i++;
	}
}

int	print_dozen(char *nb, char **dico, int index)
{
	int	i;
	int	j;

	i = 0;
	while (dico[i])
	{
		if (dico[i][0] == nb[index])
		{
			if (dico[i][1] == nb[index + 1])
			{
				print_all(dico, i, j);
				return (0);
			}
		}
		i++;
	}
	return (0);
}

void	print_tens(char *nb, char **dico, int index)
{
	int	i;
	int	j;

	i = 0;
	if (nb[index] == 1)
		i = print_dozen(nb, dico, index);
	else
	{
		if (ft_strlen(nb) > 1)
		{
			while (dico[i])
			{
				if (nb[index] == dico[i][0])
				{
					if (dico[i][1] == '0' || dico[i][1] == nb[index + 1])
						print_all(dico, i, j);
				}
				i++;
			}
			index++;
		}
		print_first_n(nb[index], dico);
	}
}

void	ft_put_under(char *nb, char **dico, int power)
{
	int	i;
	int	j;

	power = ft_strlen(nb);
	i = 0;
	if (power > 2)
	{
		while (i != power - 2)
		{
			print_first_n(nb[i], dico);
			ft_print_power(power - i, dico);
			print_tens(nb, dico, i);
			i += 3;
		}
	}
	else
		print_tens(nb, dico, 0);
}

int	print_nb(char **dico, char *nb)
{
	int	i;

	if (nb[0] == '-')
	{
		free_tab(dico);
		return (ft_strerror("Error\n"));
	}
	ft_put_under(nb, dico, 0);
	free_tab(dico);
	return (0);
}
