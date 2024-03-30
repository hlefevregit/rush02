/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlefevre <hlefevre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 13:19:55 by hlefevre          #+#    #+#             */
/*   Updated: 2024/03/30 13:53:11 by hlefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH02_H
# define RUSH02_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>

# define BUFSIZ 10000

int		ft_strerror(char *str);
int		ft_atoi(const char *str);
int		print_nb(char **dico, char *nb);

void	ft_putchar(char c);
void	ft_putstr(char *str);

char	**ft_split(const char *s, char c);

char	*ft_itoa(int n);

size_t	ft_strlen(const char *str);

#endif