/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hulefevr <hulefevr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 13:22:44 by hlefevre          #+#    #+#             */
/*   Updated: 2024/03/31 19:27:38 by hulefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	treat_no_dico(char *nb)
{
	int		fd;
	int		size;
	char	*buf;
	char	**dico;

	buf = malloc(sizeof(char) * BUFSIZ);
	fd = open("../dic/numbers.dict", O_RDONLY);
	if (fd == -1)
		return (ft_strerror("Dict Error\n"));
	size = read(fd, buf, BUFSIZ);
	if (size == -1)
		return (ft_strerror("Dict Error\n"));
	dico = ft_split(buf, '\n');
	close(fd);
	return (print_nb(dico, nb));
}

int	treat_dico(char *fd_path, char *nb)
{
	int		fd;
	int		size;
	int		i;
	char	*buf;
	char	**dico;

	buf = malloc(sizeof(char) * BUFSIZ);
	fd = open(fd_path, O_RDONLY);
	if (fd == -1)
		return (ft_strerror("Dict Error\n"));
	size = read(fd, buf, BUFSIZ);
	if (size == -1)
		return (ft_strerror("Dict Error\n"));
	dico = ft_split(buf, '\n');
	i = 0;
	while (dico[i])
		i++;
	dico[41] = '\0';
	close(fd);
	return (print_nb(dico, nb));
}

int	main(int ac, char **av)
{
	int	ret;

	if (ac > 3 || ac == 1)
		return (ft_strerror("Error\n"));
	if (ac == 3)
		ret = treat_dico(av[1], av[2]);
	if (ac == 2)
		ret = treat_no_dico(av[1]);
	return (ret);
}
