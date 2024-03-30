/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_nb.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlefevre <hlefevre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 13:48:11 by hlefevre          #+#    #+#             */
/*   Updated: 2024/03/30 14:24:08 by hlefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"


while (dico[i][j] >= '0' && dico[i][j] <= '9' && dico[i][j] == nb[j])
{

}

void	ft_put_n(int n, char **dico, int power)
{
	while (n >= 10)
	{
		n /= 10;
		power++;
	}
}

int	print_nb(char **dico, char *nb)
{
	int	n;
	int	i;

	n = ft_itoa(nb);
	if (n < 0)
		return(ft_strerror("Error\n"));
	if (n >= 1000)
		ft_put_n(n, dico, 0);

}